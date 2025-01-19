#include "Manager.h"

Manager::Manager()
{
    SQLiteDatabase db("mydatabase.db");   //这里写你要链接的数据库的名称，如果有就会链接，如果没有就会创建一个


}
bool Manager::add_table(QVector<QString> &values)
{
    SQLiteDatabase db("mydatabase.db");   //这里写你要链接的数据库的名称，如果有就会链接，如果没有就会创建一个

    // 建立数据库连接
    if (db.createConnection()) {
        qDebug() << "Connected to the database successfully.";

        // 创建表（如果尚未创建）
        // 假设表名为"people"，列名为"id INTEGER PRIMARY KEY, name TEXT, age INTEGER"

        if (!db.createTable("table_", "id INTEGER PRIMARY KEY, size TEXT, time1 TEXT, time2 TEXT, time3 TEXT, time4 TEXT")) {
            qDebug() << "Failed to create table.";
        } else {
            qDebug() << "Table created successfully.";
        }
        // 插入数据
        if (db.insertData("table_", "id, size, time1, time2, time3, time4", values)) {
            qDebug() << "Data inserted successfully.";
            return true;
        } else {
            qDebug() << "Failed to insert data.";
            return false;
        }

        // 关闭数据库连接
        db.closeConnection();
        qDebug() << "Connection closed.";
    } else {
        qDebug() << "Failed to connect to the database.";
    }

}
bool Manager::add_order(QVector<QString> &values)
{
    SQLiteDatabase db("mydatabase.db");   //这里写你要链接的数据库的名称，如果有就会链接，如果没有就会创建一个

    // 建立数据库连接
    if (db.createConnection()) {
        qDebug() << "Connected to the database successfully.";

        // 创建表（如果尚未创建）
        // 假设表名为"people"，列名为"id INTEGER PRIMARY KEY, name TEXT, age INTEGER"

        if (!db.createTable("order_", "id INTEGER PRIMARY KEY, name TEXT, phone TEXT, order_string TEXT, is_pay TEXT")) {
            qDebug() << "Failed to create table.";
        } else {
            qDebug() << "Table created successfully.";
        }
        // 插入数据
        if (db.insertData("order_", "id, name, phone, order_string, is_pay", values)) {
            qDebug() << "Data inserted successfully.";
        } else {
            qDebug() << "Failed to insert data.";
        }

        // 关闭数据库连接
        db.closeConnection();
        qDebug() << "Connection closed.";
    } else {
        qDebug() << "Failed to connect to the database.";
    }
}
bool Manager::delete_dish(QString tar)
{
    SQLiteDatabase db("mydatabase.db");   //这里写你要链接的数据库的名称，如果有就会链接，如果没有就会创建一个

    // 建立数据库连接
    if (db.createConnection()) {
        qDebug() << "Connected to the database successfully.";

        // 创建表（如果尚未创建）
        // 假设表名为"people"，列名为"id INTEGER PRIMARY KEY, name TEXT, age INTEGER"

        db.deleteData("dish_","id",tar);

        // 关闭数据库连接
        db.closeConnection();
        qDebug() << "Connection closed.";
    } else {
        qDebug() << "Failed to connect to the database.";
    }
}
bool Manager::delete_table(QString tar)
{
    SQLiteDatabase db("mydatabase.db");   //这里写你要链接的数据库的名称，如果有就会链接，如果没有就会创建一个

    // 建立数据库连接
    if (db.createConnection()) {
        qDebug() << "Connected to the database successfully.";



        db.deleteData("table_","id",tar);

        // 关闭数据库连接
        db.closeConnection();
        qDebug() << "Connection closed.";
    } else {
        qDebug() << "Failed to connect to the database.";
    }
}
bool Manager::add_dish(QVector<QString> &values)
{
    SQLiteDatabase db("mydatabase.db");   //这里写你要链接的数据库的名称，如果有就会链接，如果没有就会创建一个

    // 建立数据库连接
    if (db.createConnection()) {
        qDebug() << "Connected to the database successfully.";

        // 创建表（如果尚未创建）
        // 假设表名为"people"，列名为"id INTEGER PRIMARY KEY, name TEXT, age INTEGER"

        if (!db.createTable("dish_", "id INTEGER PRIMARY KEY, name TEXT, price TEXT")) {
            qDebug() << "Failed to create table.";
        } else {
            qDebug() << "Table created successfully.";
        }
        // 插入数据
        if (db.insertData("dish_", "id, name, price", values)) {
            qDebug() << "Data inserted successfully.";
            return true;
        } else {
            qDebug() << "Failed to insert data.";
            return false;
        }

        // 关闭数据库连接
        db.closeConnection();
        qDebug() << "Connection closed.";
    } else {
        qDebug() << "Failed to connect to the database.";
    }
}
bool Manager::delete_order(QString id)
{
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
    db.deleteData("order_","id",id);
    if (db.createConnection()) {
        qDebug() << "Connected to the database successfully.";



        db.deleteData("order_","id",id);

        // 关闭数据库连接
        db.closeConnection();
        qDebug() << "Connection closed.";
    } else {
        qDebug() << "Failed to connect to the database.";
    }
}
bool Manager::delete_finish_order()
{
    SQLiteDatabase db("mydatabase.db");
    if (db.createConnection()) {
        qDebug() << "Connected to the database successfully.";



        db.deleteData("order_","is_pay","1");

        // 关闭数据库连接
        db.closeConnection();
        qDebug() << "Connection closed.";
    } else {
        qDebug() << "Failed to connect to the database.";
    }
}
