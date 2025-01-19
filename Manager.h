#ifndef MANAGER_H
#define MANAGER_H
#include<iostream>
using namespace std;
#include"SQLiteDatabase.h"
#include"manager_interface.h"
class Manager
{
private:
    bool allow_access;
    string account;
    string passward;

public:
    Manager();
    ~Manager(){};
    bool add_table(QVector<QString> &values);
    bool add_dish(QVector<QString> &values);
    bool delete_table (QString tar);
    bool delete_dish (QString tar);
    bool add_order(QVector<QString> &values);
    bool delete_order(QString id);
    bool delete_finish_order();
    void bill_statistics();
    float bill_sum();
};

#endif // MANAGER_H
