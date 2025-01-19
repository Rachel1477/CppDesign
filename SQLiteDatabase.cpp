#include "SQLiteDatabase.h"
#include <QSqlRecord>
SQLiteDatabase::SQLiteDatabase(const QString &dbName) : dbName_(dbName)  {}

SQLiteDatabase::~SQLiteDatabase() {
    closeConnection();
}

bool SQLiteDatabase::createConnection() {
    db_ = QSqlDatabase::addDatabase("QSQLITE");
    db_.setDatabaseName(dbName_);

    if (!db_.open()) {
        qDebug() << "Error: Failed to connect to the database." << db_.lastError();
        return false;
    }

    return true;
}

void SQLiteDatabase::closeConnection() {
    if (db_.isOpen()) {
        db_.close();
    }
}

bool SQLiteDatabase::createTable(const QString &tableName, const QString &columns) {
    if (!db_.isOpen()) {
        return false;
    }

    QSqlQuery query;
    query.prepare(QString("CREATE TABLE IF NOT EXISTS %1 (%2)").arg(tableName).arg(columns));

    if (!query.exec()) {
        qDebug() << "Error: Failed to create table." << db_.lastError()<< query.lastError().text();;
        return false;
    }

    return true;
}

bool SQLiteDatabase::insertData(const QString &tableName, const QString &columns, const QVector<QString> &values) {
    if (!db_.isOpen()) {
        return false;
    }
    QString keyword="?";
    // 构造插入语句
    for(int i=0;i<columns.size();i++)
    {
        if(columns[i]==',')
        {
            keyword+=", ?";
        }

    }

    QString insertStatement = QString("INSERT INTO %1 (%2) VALUES (%3)").arg(tableName).arg(columns).arg(keyword);
    QSqlQuery query;
    query.prepare(insertStatement);

    // 循环插入数据
    for (int i = 0; i < values.size(); i ++) {
        query.addBindValue(values[i]);

    }
            if (!query.exec()) {
                qDebug() << "Error: Failed to insert data." << db_.lastError();
                return false;
            }
    return true;
}
bool SQLiteDatabase::updateData(const QString &tableName, const QString &setColumns, const QString &whereColumns, const QVariant &whereValue) {
    if (!db_.isOpen()) {
        return false;
    }

    QSqlQuery query;
    query.prepare(QString("UPDATE %1 SET %2 WHERE %3 = ?").arg(tableName).arg(setColumns).arg(whereColumns));
    query.addBindValue(whereValue);

    if (!query.exec()) {
        qDebug() << "Error: Failed to update data." << db_.lastError();
        return false;
    }

    return true;
}
bool SQLiteDatabase::deleteData(const QString &tableName, const QString &whereColumns, const QVariant &whereValue) {
    if (!db_.isOpen()) {
        return false;
    }

    QSqlQuery query;
    query.prepare(QString("DELETE FROM %1 WHERE %2 = ?").arg(tableName).arg(whereColumns));
    query.addBindValue(whereValue);

    if (!query.exec()) {
        qDebug() << "Error: Failed to delete data." << db_.lastError();
        return false;
    }

    return true;
}

QVector<QVector<QString>> SQLiteDatabase::selectData(const QString &tableName, const QString &columns, const QString &whereColumns, const QVariant &whereValue) {
    if (!db_.isOpen()) {
        return {};
    }

    QSqlQuery query;
    query.prepare(QString("SELECT %1 FROM %2 WHERE %3 = ?").arg(columns).arg(tableName).arg(whereColumns));
    query.addBindValue(whereValue);

    if (!query.exec()) {
        qDebug() << "Error: Failed to select data." << db_.lastError();
        return {};
    }

    QVector<QVector<QString>> result;
    while (query.next()) {
        QVector<QString> row;
        for (int i = 0; i < query.record().count(); ++i) {
            row.append(query.value(i).toString());
        }
        result.append(row);
    }

    return result;
}
QVector<QVector<QString>> SQLiteDatabase::selectall(const QString &tableName, const QString &columns) {
    if (!db_.isOpen()) {
        return {};
    }

    QSqlQuery query;
    query.prepare(QString("SELECT %1 FROM %2").arg(columns).arg(tableName));

    if (!query.exec()) {
        qDebug() << "Error: Failed to select data." << db_.lastError();
        return {};
    }

    QVector<QVector<QString>> result;
    while (query.next()) {
        QVector<QString> row;
        for (int i = 0; i < query.record().count(); ++i) {
            row.append(query.value(i).toString());
        }
        result.append(row);
    }

    return result;
}
bool SQLiteDatabase::addColumnToTable(const QString &tableName, const QString &columnName, const QString &columnType) {
    if (!db_.open()) {
        qDebug() << "Error: Unable to connect to database";
        return false;
    }

    QSqlQuery query;
    QString addColumnQuery = QString("ALTER TABLE %1 ADD COLUMN %2 %3").arg(tableName, columnName, columnType);
    if (!query.exec(addColumnQuery)) {
        qDebug() << "Error: Unable to add column to table - " << query.lastError().text();
        return false;
    }

    return true;
}

bool SQLiteDatabase::removeColumnFromTable(const QString &tableName, const QString &columnName) {
    if (!db_.isOpen()) {
        return {};
    }

    QSqlQuery query;
    QString removeColumnQuery = QString("ALTER TABLE %1 DROP COLUMN '%2'").arg(tableName, columnName);
    if (!query.exec(removeColumnQuery)) {
        qDebug() << "Error: Unable to remove column from table";
        qDebug() << "Last error: " << query.lastError();
        return false;
    }

    return true;
}

