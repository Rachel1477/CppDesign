#include "reserve_dish.h"
#include "ui_reserve_dish.h"
#include<iostream>
reserve_dish::reserve_dish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reserve_dish)
{



    ui->setupUi(this);
    ui->tableWidget->clear();
    QStringList headers;
   headers << "菜品编号" << "菜品名称"<<"价格";
   QStringList headers2;
   headers2 << "菜品编号" << "菜品名称"<<"价格"<<"数量";
   ui->tableWidget_2->setHorizontalHeaderLabels(headers2);

   ui->tableWidget->setHorizontalHeaderLabels(headers);
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "dish_";
            QString columns = "id, name, price"; // 要查询的列名，用逗号分隔
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


}

reserve_dish::~reserve_dish()
{
    delete ui;
}

void reserve_dish::on_pushButton_3_clicked()
{
    QString ID=ui->lineEdit->text();  //用户点的菜品编号
    QString num=ui->lineEdit_2->text();//用户点点了多少份
   QStringList headers;
   headers << "菜品编号" << "菜品名称"<<"价格"<<"数量";
   ui->tableWidget_2->setHorizontalHeaderLabels(headers);
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "dish_";
            QString columns = "id, name, price"; // 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectData(tableName, columns,"id",ui->lineEdit->text());

        if(!result.empty())
        {
             ui->err->setText("");
            int foundIndex = -1;
            for (int i = 0; i < ui->tableWidget_2->rowCount(); ++i) {
                if (ui->tableWidget_2->item(i, 0)->text() == ID) {
                    foundIndex = i;
                    break;
                }
            }

            if (foundIndex != -1) {
                // 菜品已在表格中，增加数量
                int currentNum = ui->tableWidget_2->item(foundIndex, 3)->text().toInt();
                ui->tableWidget_2->item(foundIndex, 3)->setText(QString::number(currentNum + num.toInt()));
            } else {
                // 菜品不在表格中，添加新行
                QTableWidgetItem *itemID = new QTableWidgetItem(ID);
                QTableWidgetItem *itemName = new QTableWidgetItem(result[0][1]);
                QTableWidgetItem *itemPrice = new QTableWidgetItem(result[0][2]);
                QTableWidgetItem *itemNum = new QTableWidgetItem(QString::number(num.toInt()));
                ui->tableWidget_2->insertRow(M_index);
                ui->tableWidget_2->setItem(M_index, 0, itemID);
                ui->tableWidget_2->setItem(M_index, 1, itemName);
                ui->tableWidget_2->setItem(M_index, 2, itemPrice);
                ui->tableWidget_2->setItem(M_index, 3, itemNum);
                M_index++;
            }
        }
        else{
            QPalette palette = ui->err->palette();
            palette.setColor(QPalette::Foreground, Qt::red);
            ui->err->setPalette(palette);
            ui->err->setText("请输入正确的菜品编号");

        }
        // 计算总价
            double totalPrice = 0.0;
            int n=0;
            for (int row = 0; row < ui->tableWidget_2->rowCount(); ++row) {
                QString priceText = ui->tableWidget_2->item(row, 2)->text(); // 获取价格
                QString numText = ui->tableWidget_2->item(row, 3)->text(); // 获取数量
                double price = priceText.toDouble();
                int num = numText.toInt();
                totalPrice += price * num;
                n++;
            }

            // 显示总价
            ui->total_price->setText(QString::number(totalPrice));
            values[5]=QString::number(totalPrice);
            values[4]=QString::number(n);


}

void reserve_dish::on_pushButton_2_clicked()
{

        // 获取当前选中的行
        int currentRow = ui->tableWidget_2->currentRow();

        // 如果有选中的行，则删除
        if (currentRow != -1) {
            ui->tableWidget_2->removeRow(currentRow);
        }
        M_index--;
        double totalPrice = 0.0;
        for (int row = 0; row < ui->tableWidget_2->rowCount(); ++row) {
            QString priceText = ui->tableWidget_2->item(row, 2)->text(); // 获取价格
            QString numText = ui->tableWidget_2->item(row, 3)->text(); // 获取数量
            double price = priceText.toDouble();
            int num = numText.toInt();
            totalPrice += price * num;
        }

        // 显示总价
        ui->total_price->setText(QString::number(totalPrice));

}


void reserve_dish::on_pushButton_clicked()
{
    double totalPrice = 0.0;
    for (int row = 0; row < ui->tableWidget_2->rowCount(); ++row) {
        QString priceText = ui->tableWidget_2->item(row, 2)->text(); // 获取价格
        QString numText = ui->tableWidget_2->item(row, 3)->text(); // 获取数量
        double price = priceText.toDouble();
        int num = numText.toInt();
        totalPrice += price * num;
    }
    values[4]=QString::number(totalPrice)  ;
    pay * pay= new class pay(totalPrice,account);
    pay->show();
    SQLiteDatabase db("mydatabase.db");   //这里写你要链接的数据库的名称，如果有就会链接，如果没有就会创建一个

       // 建立数据库连接
    db.createConnection();
        QString tableName = "order_";
            QString columns = "id, name, phone, dish_string, total_number, total_price, is_pay, time, table_id, table_size";// 要查询的列名，用逗号分隔

//            QVector <QString> values;
//            values<<"123"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0"<<"0";
            values[1]=account;
            qDebug()<<values<<account;
            db.insertData(tableName,columns,values);

    this->close();

}
