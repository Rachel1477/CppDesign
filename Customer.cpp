#include "Customer.h"
#include<iostream>
Customer::Customer()
{

}
void Customer::read_form_datebase(QString account)
{
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
    QVector<QVector<QString>> temp;
    temp=db.selectData("customer","phone, passward, account, name, is_reserve","account",account);
    for(const auto &row : temp)
    {
        passward= row[1];
        account= row[2];
        name= row[3];
    }

}
QString Customer::read_name()
{
    return name;
}
QString Customer::read_phone()
{
    return phone_number;
}
QString Customer::read_passward()
{
    return passward;
}
QString Customer::read_account()
{
    return account;
}
bool Customer::insret_order(QVector<QString> &values)
    {
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
    if (db.insertData("order_", "id, name, phone, dish_string, total_number, total_price, is_pay, time, table_id, table_size", values)) {
        qDebug() << "Data inserted successfully.";
    } else {
        qDebug() << "Failed to insert data.";
    }

}
bool Customer::cancel_reserve()
{
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
    if (db.deleteData("order_", "account", account)) {
        qDebug() << "Data elete";
    } else {
        qDebug() << "Failed to insert data.";
    }
}







