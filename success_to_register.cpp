#include "success_to_register.h"
#include "ui_success_to_register.h"

success_to_register::success_to_register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::success_to_register)
{
    ui->setupUi(this);
}

success_to_register::~success_to_register()
{
    delete ui;
}

void success_to_register::on_pushButton_clicked()
{
    this->close();
}
