#include "manager_interface.h"
#include "ui_manager_interface.h"

manager_interface::manager_interface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manager_interface)
{
    ui->setupUi(this);
}

manager_interface::~manager_interface()
{
    delete ui;
}

void manager_interface::on_pushButton_clicked()
{
    change_table* change_table= new class change_table();
    change_table->show();
}

void manager_interface::on_pushButton_2_clicked()
{
    change_dish* change_dish= new class change_dish();
    change_dish->show();
}

void manager_interface::on_pushButton_3_clicked()
{
    change_order* change_order= new class change_order();
    change_order->show();
}
