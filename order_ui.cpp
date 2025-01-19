#include "order_ui.h"
#include "ui_order_ui.h"

order_ui::order_ui(QString account,QWidget *parent) :account(account),

    QWidget(parent),
    ui(new Ui::order_ui)
{
    ui->setupUi(this);



}

order_ui::~order_ui()
{
    delete ui;
}

void order_ui::on_pushButton_2_clicked()
{
    this->close();
}

void order_ui::on_pushButton_clicked()
{
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "order_";
            QString columns = "id, name, phone, dish_string, total_number, total_price, is_pay, time, table_id, table_size";// 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectData(tableName, columns,"name",account);
            if(!result.empty())
            {
                db.deleteData("order_","name",account);
                this->close();

            }
            else{

            }


}

void order_ui::on_pushButton_3_clicked()
{
    qDebug()<<account;
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "order_";
            QString columns = "id, name, phone, dish_string, total_number, total_price, is_pay, time, table_id, table_size";// 要查询的列名，用逗号分隔
            QVector<QVector<QString>> result = db.selectData(tableName, columns,"name",account);
            if(!result.empty())
            {
                for (const QVector<QString> &row : result) {
                    ui->id->setText(row[0]);
                    ui->time->setText(row[7]);
                    ui->total->setText(row[5]);
                    ui->table->setText(row[8]);

                }

            }
            else{
                ui->err->setText("未能查询到订单");
            }

}
