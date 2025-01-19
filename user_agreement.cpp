#include "user_agreement.h"
#include "ui_user_agreement.h"

User_Agreement::User_Agreement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::User_Agreement)
{
    ui->setupUi(this);
}

User_Agreement::~User_Agreement()
{
    delete ui;
}
