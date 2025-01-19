#include "change_table.h"
#include "ui_change_table.h"
#include"SQLiteDatabase.h"
change_table::change_table(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_table)
{
    ui->setupUi(this);
    ui->tableWidget->clear();
    QStringList headers;
    headers << "ID" << "桌位大小";
    ui->tableWidget->setHorizontalHeaderLabels(headers);
    // 调用 selectall 方法
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "table_";
            QString columns = "id, size"; // 要查询的列名，用逗号分隔
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

change_table::~change_table()
{
    delete ui;
}

void change_table::on_pushButton_clicked()
{
    Manager *M;
    M->delete_table(ui->lineEdit->text());
        ui->tableWidget->clear();
         QStringList headers;
        headers << "ID" << "桌位大小";
        ui->tableWidget->setHorizontalHeaderLabels(headers);
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "table_";
            QString columns = "id, size"; // 要查询的列名，用逗号分隔
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

void change_table::on_pushButton_2_clicked()
{


    QVector<QString> values;
    values<<ui->lineEdit_2->text()<<ui->lineEdit_3->text()<<"空"<<"空"<<"空"<<"空";
    Manager *M;
    ui->err->setText("");
    if(!M->add_table(values))
    {
        QPalette palette = ui->err->palette();
        palette.setColor(QPalette::Foreground, Qt::red);
        ui->err->setPalette(palette);
        ui->err->setText("ID不能重复");
    }

    ui->tableWidget->clear();
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "table_";
            QString columns = "id, size"; // 要查询的列名，用逗号分隔
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
