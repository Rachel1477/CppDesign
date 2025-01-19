#ifndef SQLITEDATABASE_H
#define SQLITEDATABASE_H
#include<CDateSourceSQLite.h>
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class SQLiteDatabase {
public:
    SQLiteDatabase(const QString &dbName) ;
    ~SQLiteDatabase();

    bool createConnection();
    void closeConnection();

    bool createTable(const QString &tableName, const QString &columns);
    bool insertData(const QString &tableName, const QString &columns, const QVector<QString> &values);
    bool updateData(const QString &tableName, const QString &setColumns, const QString &whereColumns, const QVariant &whereValue);
    bool deleteData(const QString &tableName, const QString &whereColumns, const QVariant &whereValue);
    QVector<QVector<QString>> selectData(const QString &tableName, const QString &columns, const QString &whereColumns, const QVariant &whereValue);
    bool removeColumnFromTable(const QString &tableName, const QString &columnName);
    bool addColumnToTable(const QString &tableName, const QString &columnName, const QString &columnType) ;
     QVector<QVector<QString>> selectall(const QString &tableName, const QString &columns);
private:
    QString dbName_;
    QSqlDatabase db_;
};

#endif // SQLITEDATABASE_H
