#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
using namespace  std;
#include"Order.h"
#include"SQLiteDatabase.h"
#include"SQLiteDatabase.h"
class Customer
{
private:
    bool is_reserve;
    QString account;
    QString passward;
    QString name;
    QString phone_number;

public:
    Customer();
    ~Customer(){};
    void read_form_datebase(QString phone) ;
    bool insret_order(QVector<QString> &values);
    bool pay(QString phone) ;
    bool cancel_reserve() ;
    QString read_account();
    QString read_passward();
    QString read_name();
    QString read_phone();


};

#endif // CUSTOMER_H
