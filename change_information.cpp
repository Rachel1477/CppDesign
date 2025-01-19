#include "change_information.h"
#include "ui_change_information.h"

Change_information::Change_information(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Change_information)
{
    ui->setupUi(this);
}

Change_information::~Change_information()
{
    delete ui;
}

void Change_information::on_pushButton_clicked()
{
    bool flag=true;
    QString phone=ui->lineEdit->text();
    QString passward=ui->lineEdit_2->text();
    //这里没修改好
    QString name=ui->lineEdit_4->text();
    SQLiteDatabase db("mydatabase.db");
    if(db.createConnection())
    {
        QVector<QVector<QString>> temp1,temp2;
        temp2=db.selectData("customer","phone","phone",phone);

        ui->err2->setText("");
        qDebug()<<temp1;
        qDebug()<<temp2;
        // 检查用户名是否已被注册

        if(!temp2.empty())
        {
            ui->err2->clear();
            QPalette palette = ui->err2->palette();
            palette.setColor(QPalette::Foreground, Qt::red);
            ui->err2->setPalette(palette);
            ui->err2->setText("此手机号已被注册过，请勿重复注册");
            flag=false;
        }
        else if(phone.size()!=11)
        {
            QPalette palette = ui->err2->palette();
            palette.setColor(QPalette::Foreground, Qt::red);
            ui->err2->setPalette(palette);
            ui->err2->setText("请输入正确的手机号");
            ui->err1->setText("");
            flag=false;
        }
        else if(flag==true)
        {
            QVector<QString> values;
            values << phone << name << account << passward << "0";


            db.deleteData("customer","account",account);
            if (db.insertData("customer", "phone, name, account, passward, is_reserve", values)) {
                qDebug() << "Data inserted successfully.";
            } else {
                qDebug() << "Failed to insert data.";
            }
            this->close();

        }

    }
    db.closeConnection();
}
