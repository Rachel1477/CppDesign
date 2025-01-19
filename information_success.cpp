#include "information_success.h"
#include "ui_information_success.h"

information_success::information_success(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::information_success)
{
    ui->setupUi(this);
}

information_success::~information_success()
{
    delete ui;
}

void information_success::on_pushButton_clicked()
{
    this->close();

}
