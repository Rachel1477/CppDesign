#include "change_order.h"
#include "ui_change_order.h"

change_order::change_order(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_order)
{
    ui->setupUi(this);
    ui->tableWidget->clear();
        QStringList headers;
    headers << "订单号" << "姓名"<<"手机号"<<"订单哈希"<<"总菜品数"<<"总价"<<"是否付款"<<"就餐时间"<<"桌号"<<"桌子大小";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
     SQLiteDatabase db("mydatabase.db");
     db.createConnection();
         QString tableName = "order_";
             QString columns = "id, name, phone, dish_string, total_number, total_price, is_pay, time, table_id, table_size";// 要查询的列名，用逗号分隔
             QVector<QVector<QString>> result = db.selectall(tableName, columns);
             // 打印结果result
                                  qDebug()<<result;
             int index = 0,column=0;
             for (const QVector<QString> &row : result) {
                 for (const QString &value : row) {
                     QTableWidgetItem *item = new QTableWidgetItem(value);
                     ui->tableWidget->setItem(index, column, item);
                     column++;

                 }

             }
}

change_order::~change_order()
{
    delete ui;
}

void change_order::on_pushButton_clicked()
{
    Manager *M;
    M->delete_order(ui->lineEdit->text());
    ui->tableWidget->clear();
    QStringList headers;
   headers << "订单号" << "姓名"<<"手机号"<<"订单哈希"<<"总菜品数"<<"总价"<<"是否付款"<<"就餐时间"<<"桌号"<<"桌子大小";
   ui->tableWidget->setHorizontalHeaderLabels(headers);
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "order_";
            QString columns = "id, name, phone, dish_string, total_number, total_price, is_pay, time, table_id, table_size";// 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectall(tableName, columns);
            // 打印结果
            int index = 0,column=0;
            for (const QVector<QString> &row : result) {
                for (const QString &value : row) {
                    QTableWidgetItem *item = new QTableWidgetItem(value);
                    ui->tableWidget->setItem(index, column, item);
                    qDebug()<<item;
                    column++;

                }

            }
}

void change_order::on_pushButton_2_clicked()
{
    Manager *M;
    M->delete_finish_order();
    ui->tableWidget->clear();
    QStringList headers;
   headers << "订单号" << "姓名"<<"手机号"<<"订单哈希"<<"总菜品数"<<"总价"<<"是否付款"<<"就餐时间"<<"桌号"<<"桌子大小";
   ui->tableWidget->setHorizontalHeaderLabels(headers);
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "order_";
            QString columns = "id, name, phone, dish_string, total_number, total_price, is_pay, time, table_id, table_size";// 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectall(tableName, columns);
            // 打印结果
            int index = 0,column=0;
            for (const QVector<QString> &row : result) {
                for (const QString &value : row) {
                    QTableWidgetItem *item = new QTableWidgetItem(value);
                    ui->tableWidget->setItem(index, column, item);
                    qDebug()<<item;
                    column++;

                }

            }
}
