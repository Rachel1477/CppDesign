#include "reserve_tabelandtime.h"
#include "ui_reserve_tabelandtime.h"
#include <random>
#include <iostream>
reserve_tabelandtime::reserve_tabelandtime(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reserve_tabelandtime)
{
    ui->setupUi(this);
    ui->tableWidget->clear();
    QStringList headers;
   headers << "桌号" << "类型"<<"预定情况";
   ui->tableWidget->setHorizontalHeaderLabels(headers);
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "table_";
            QString columns = "id, size, time1";// 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectall(tableName, columns);
            // 打印结果
            int index = 0,column=0;
            for (const QVector<QString> &row : result) {
                for (const QString &value : row) {
                    QTableWidgetItem *item = new QTableWidgetItem(value);
                    ui->tableWidget->setItem(index, column, item);
                    column++;

                }

            }
            ui->tableWidget_2->clear();
           ui->tableWidget_2->setHorizontalHeaderLabels(headers);
                    QString columns2 = "id, size, time2";// 要查询的列名，用逗号分隔
                    QVector<QVector<QString>> result2 = db.selectall(tableName, columns2);
                    // 打印结果
                    int index2 = 0, column2=0;
                    for (const QVector<QString> &row : result2) {
                        for (const QString &value : row) {
                            QTableWidgetItem *item = new QTableWidgetItem(value);
                            ui->tableWidget_2->setItem(index2, column2, item);
                            column2++;

                        }

                    }
                    ui->tableWidget_3->clear();
                   ui->tableWidget_3->setHorizontalHeaderLabels(headers);
                            QString columns3 = "id, size, time3";// 要查询的列名，用逗号分隔
                            QVector<QVector<QString>> result3 = db.selectall(tableName, columns3);
                            // 打印结果
                            int index3 = 0, column3=0;
                            for (const QVector<QString> &row : result3) {
                                for (const QString &value : row) {
                                    QTableWidgetItem *item = new QTableWidgetItem(value);
                                    ui->tableWidget_3->setItem(index3, column3, item);
                                    column3++;

                                }

                            }
                            ui->tableWidget_4->clear();
                           ui->tableWidget_4->setHorizontalHeaderLabels(headers);
                                    QString columns4 = "id, size, time4";// 要查询的列名，用逗号分隔
                                    QVector<QVector<QString>> result4 = db.selectall(tableName, columns3);
                                    // 打印结果
                                    int index4 = 0, column4=0;
                                    for (const QVector<QString> &row : result4) {
                                        for (const QString &value : row) {
                                            QTableWidgetItem *item = new QTableWidgetItem(value);
                                            ui->tableWidget_4->setItem(index4, column4, item);
                                            column4++;

                                        }

                                    }

                                    std::srand(std::time(0));
                                    int randomNumber = std::rand() % 10000 + 1;
                                    QString temp=QString::number(randomNumber);


     values<<temp<<account<<account<<"0"<<"0"<<"0"<<"1"<<"0"<<"0"<<"0";
//     values<<"0"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0";
}

reserve_tabelandtime::~reserve_tabelandtime()
{
    delete ui;
}

void reserve_tabelandtime::on_pushButton_clicked()
{
    QString id;
    QPalette palette = ui->err->palette();
    palette.setColor(QPalette::Foreground, Qt::red);
    ui->err->setPalette(palette);
    ui->err->setText("");
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "table_";
            QString columns = "id, size, time1"; // 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectData(tableName, columns,"id",ui->lineEdit->text());
            if(result.empty())
            {
                ui->err->setText("桌号不存在");
            }
            for (const QVector<QString> &row : result) {
                if(row[2]=="空")
                {
                    db.updateData("table_","time1='已被预订'","id",row[0]);
                    values[8]=row[0];
                    values[9]=row[1];
                    values[7]="8:00-10:00";
                    qDebug()<<values;
                    this->close();
                     reserve_dish * reserve_dish= new class reserve_dish();
                     reserve_dish->show();
                     reserve_dish->values=values;
                     reserve_dish->account=account;
                }
                else
                {
                    ui->err->setText("该桌已被预订");
                }

            }

}



void reserve_tabelandtime::on_pushButton_2_clicked()
{
    QString id;
    QPalette palette = ui->err_4->palette();
    palette.setColor(QPalette::Foreground, Qt::red);
    ui->err_4->setPalette(palette);
    ui->err_4->setText("");
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "table_";
            QString columns = "id, size, time4"; // 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectData(tableName, columns,"id",ui->lineEdit_4->text());
            if(result.empty())
            {
                ui->err_4->setText("桌号不存在");
            }
            for (const QVector<QString> &row : result) {
                if(row[2]=="空")
                {
                    db.updateData("table_","time4='已被预订'","id",row[0]);
                    values[8]=row[0];
                    values[9]=row[1];
                    values[7]="10:00-12:00";
                    qDebug()<<values;
                    this->close();
                     reserve_dish * reserve_dish= new class reserve_dish();
                     reserve_dish->show();
                     reserve_dish->values=values;
                                          reserve_dish->account=account;
                }
                else
                {
                    ui->err_4->setText("该桌已被预订");
                }

            }
}

void reserve_tabelandtime::on_pushButton_3_clicked()
{
    QString id;
    QPalette palette = ui->err_3->palette();
    palette.setColor(QPalette::Foreground, Qt::red);
    ui->err_3->setPalette(palette);
    ui->err_3->setText("");
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "table_";
            QString columns = "id, size, time3"; // 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectData(tableName, columns,"id",ui->lineEdit_3->text());
            if(result.empty())
            {
                ui->err_3->setText("桌号不存在");
            }
            for (const QVector<QString> &row : result) {
                if(row[2]=="空")
                {
                    db.updateData("table_","time3='已被预订'","id",row[0]);
                    values[8]=row[0];
                    values[9]=row[1];
                    values[7]="12:00-14:00";
                    qDebug()<<values;
                    this->close();
                     reserve_dish * reserve_dish= new class reserve_dish();
                     reserve_dish->show();
                     reserve_dish->values=values;
                                          reserve_dish->account=account;
                }
                else
                {
                    ui->err_3->setText("该桌已被预订");
                }

            }
}

void reserve_tabelandtime::on_pushButton_4_clicked()
{
    QString id;
    QPalette palette = ui->err_2->palette();
    palette.setColor(QPalette::Foreground, Qt::red);
    ui->err_2->setPalette(palette);
    ui->err_2->setText("");
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "table_";
            QString columns = "id, size, time2"; // 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectData(tableName, columns,"id",ui->lineEdit_2->text());
            if(result.empty())
            {
                ui->err_4->setText("桌号不存在");
            }
            for (const QVector<QString> &row : result) {
                if(row[2]=="空")
                {
                    db.updateData("table_","time2='已被预订'","id",row[0]);
                    values[8]=row[0];
                    values[9]=row[1];
                    values[7]="14:00-16:00";
                    qDebug()<<values;
                    this->close();
                     reserve_dish * reserve_dish= new class reserve_dish();
                     reserve_dish->show();
                     reserve_dish->values=values;
                                          reserve_dish->account=account;
                }
                else
                {
                    ui->err_2->setText("该桌已被预订");
                }

            }
}
