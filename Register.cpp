#include "Register.h"

#include <QDebug>
Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_2_clicked()  //用户协议
{
    User_Agreement * User_Agreement= new class User_Agreement();
    User_Agreement->show();
}

void Register::on_checkBox_stateChanged(int arg1)
{
    if(arg1!=0)
    {
        agree=true;
    }
    else
    {
        agree=false;
    }
}

void Register::on_pushButton_clicked()  //注册
{
    bool flag=true;
    QString username=ui->lineEdit->text();
    QString passward=ui->lineEdit_2->text();
    QString phone=ui->lineEdit_3->text();
    QString name=ui->lineEdit_4->text();
    SQLiteDatabase db("mydatabase.db");
    if(db.createConnection())
    {

        QVector<QVector<QString>> temp1,temp2;
        temp1=db.selectData("customer","phone, passward, account","account",username);
        temp2=db.selectData("customer","phone, passward, account","phone",phone);

        // 重置所有错误提示
        ui->err1->setText("");
        ui->err2->setText("");
        ui->err3->setText("");
        ui->err4->setText("");

        // 检查用户名是否已被注册
        if(!temp1.empty())
        {
            QPalette palette = ui->err1->palette();
            palette.setColor(QPalette::Foreground, Qt::red);
            ui->err1->setPalette(palette);
            ui->err1->setText("此用户名已被注册，请勿重复注册");
            flag=false;
        }
        else if(!temp2.empty())
        {
            QPalette palette = ui->err3->palette();
            palette.setColor(QPalette::Foreground, Qt::red);
            ui->err3->setPalette(palette);
            ui->err3->setText("此手机号已被注册过，请勿重复注册");
            flag=false;
        }
        else if(phone.size()!=11)
        {
            QPalette palette = ui->err3->palette();
            palette.setColor(QPalette::Foreground, Qt::red);
            ui->err3->setPalette(palette);
            ui->err3->setText("请输入正确的手机号");
            ui->err2->setText("");
            flag=false;
        }
        else if(agree==false)
        {
            QPalette palette = ui->err4->palette();
            palette.setColor(QPalette::Foreground, Qt::red);
            ui->err4->setPalette(palette);
            ui->err4->setText("请阅读并勾选同意用户协议才能完成注册");
            ui->err3->setText("");
            flag=false;
        }
        else if(flag==true)
        {
            QVector<QString> values;
            values << phone << name << username << passward << "0";
            if (db.insertData("customer", "phone, name, account, passward, is_reserve", values)) {
                qDebug() << "Data inserted successfully.";
            } else {
                qDebug() << "Failed to insert data.";
            }
            this->close();
             success_to_register * success_to_register= new class success_to_register();
             success_to_register->show();
        }

    db.closeConnection();
}
}








