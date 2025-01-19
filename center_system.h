#ifndef CENTER_SYSTEM_H
#define CENTER_SYSTEM_H
#include"Customer.h"
#include "Dish.h"
#include "Order.h"
#include "Manager.h"
#include "SQLiteDatabase.h"
#include"Dialog_.h"
#include "mainwindow.h"
#include "Register.h"
#include<CDateSourceSQLite.h>
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug> // 包含QDebug头文件
#include "SQLiteDatabase.h"
#include <QVector>
#include <QVariant>
#include<iostream>
#include <QCoreApplication>
#include <QDebug>
#include "SQLiteDatabase.h"
#include"Dialog_.h"


class center_system
{
private:
//   int type;
//   Manager manager;
//   Customer  customer;
//   Order order;



public:
    center_system();
    ~center_system();
    int start() ;
    void run( int type);



};

#endif // CENTER_SYSTEM_H
