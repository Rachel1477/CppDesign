#include "pay.h"
#include "ui_pay.h"
#include"SQLiteDatabase.h"
#include"Customer.h"
pay::pay(double total,QString account,QWidget *parent) :QWidget(parent),total_price(total),
    ui(new Ui::pay)
{
    ui->setupUi(this);
    ui->total->setText(QString::number(total_price));
}

pay::~pay()
{
    delete ui;
}

void pay::on_pushButton_clicked()
{
    this->close();
}
