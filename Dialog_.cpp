#include "Dialog_.h"
#include "ui_Dialog_.h"
#include "SQLiteDatabase.h"
#include"user_interface.h"
#include"Register.h"
Dialog_::Dialog_(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dialog_)
{
    ui->setupUi(this);
}

Dialog_::~Dialog_()
{
    delete ui;
}

void Dialog_::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    QString passward=ui->lineEdit_2->text();
    SQLiteDatabase db("mydatabase.db");
    if(db.createConnection())
    {

        QVector<QVector<QString>> temp1;
        temp1=db.selectData("customer","phone, passward, account","account",username);
        QString D_username,D_passward;
        QPalette palette = ui->error_label->palette();
        palette.setColor(QPalette::Foreground, Qt::red);
        ui->error_label->setPalette(palette);
        if(passward=="123456" && username=="admin")
        {
                    manager_interface* manager_interface= new class manager_interface();
                    manager_interface->show();
                    this->close();
        }
        if(temp1.empty())
        {

            ui->error_label->setText("用户名不存在");

        }
        else
        {
            for(const auto &row : temp1)
            {
            D_username=row[2];
            D_passward=row[1];
            qDebug()<<D_username<<"  "<<D_passward;
            }
            if(D_passward!=passward)
            {
                ui->error_label->setText("密码错误，请重新输入");

            }
            else
            {
                Customer *C=new Customer();
                C->read_form_datebase(D_username);
                user_interface* user_interface= new class user_interface(username);
                user_interface->show();
                this->close();

            }
        }

    }




}

void Dialog_::on_pushButton_2_clicked()
{
    Register * Register= new class Register();
    Register->show();
}
