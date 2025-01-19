#include "a.h"
#include "ui_a.h"

A::A(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::A)
{
    ui->setupUi(this);
}

A::~A()
{
    delete ui;
}
