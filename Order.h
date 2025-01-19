#ifndef ORDER_H
#define ORDER_H
#include<iostream>
using namespace std;
#include<vector>
#include<string>
class Order
{
private:
    int table_number;
    string  phone_number;
    float total_price ;
    int used_coupon ;
    float actual_payment ;
    vector<float> all_dish ;
public:
     Order();
    ~Order();
    bool book_table(int tabel_number ) ;
    bool book_dish (int dish) ;
    int calculate_total_price() ;
    int choose_coupon(int coupon_number) ;
    vector<int> read_dishlist() ;

};

#endif // ORDER_H
