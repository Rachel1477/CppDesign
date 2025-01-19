#ifndef DISH_H
#define DISH_H
#include<iostream>
using namespace  std;
#include<vector>
#include<string>
#include"SQLiteDatabase.h"
class Dish
{
private:
    string dish_name ;
    float price ;
    int id;
public:
     Dish();
    ~Dish();
     string read_name() ;
     float read_price() ;
     bool change_price( int price) ;
     bool change_name(string name) ;


};

#endif // DISH_H
