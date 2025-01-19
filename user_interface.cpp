#include "user_interface.h"
#include "ui_user_interface.h"

user_interface::user_interface(QString account,QWidget *parent) :QWidget(parent),account(account),
    ui(new Ui::user_interface)
{
    ui->setupUi(this);



    Customer *C;
    C->read_form_datebase(account);



    name=C->read_name();
    phone=C->read_phone();
    qDebug()<<name;
    ui->label_2->setText("欢迎 "+C->read_name()+",请选择要进行的操作");
    QFont font("Arial", 20);

    // 将字体应用到label_2上
    ui->label_2->setFont(font);
}

user_interface::~user_interface()
{
    delete ui;
}

void user_interface::on_pushButton_clicked()
{
            Change_information* Change_information= new class Change_information();
            Change_information->account=account;
            Change_information->show();
}

void user_interface::on_pushButton_2_clicked()
{
//    reserve_dish* reserve_dish= new class reserve_dish();
//    reserve_dish->account=account;
//    reserve_dish->show();
    reserve_tabelandtime* reserve_tabelandtime1= new class reserve_tabelandtime();
    reserve_tabelandtime1->account=account;
      reserve_tabelandtime1->name=name;
      reserve_tabelandtime1->phone=account;
    reserve_tabelandtime1->show();
}

void user_interface::on_pushButton_3_clicked()
{
    order_ui* order_ui= new class order_ui(account);
    order_ui->account=account;
    order_ui->show();
}
