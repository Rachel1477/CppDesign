#include "change_dish.h"
#include "ui_change_dish.h"

change_dish::change_dish(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change_dish)
{
    ui->setupUi(this);
    ui->tableWidget->clear();
    QStringList headers;
   headers << "菜品编号" << "菜品名称"<<"价格";
   ui->tableWidget->setHorizontalHeaderLabels(headers);
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "dish_";
            QString columns = "id, name, price";// 要查询的列名，用逗号分隔
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

change_dish::~change_dish()
{
    delete ui;
}

void change_dish::on_pushButton_clicked()
{
    Manager *M;

    M->delete_dish(ui->lineEdit->text());
    ui->tableWidget->clear();
    QStringList headers;
   headers << "菜品编号" << "菜品名称"<<"价格";
   ui->tableWidget->setHorizontalHeaderLabels(headers);
    SQLiteDatabase db("mydatabase.db");
    db.createConnection();
        QString tableName = "dish_";
            QString columns = "id, name, price";// 要查询的列名，用逗号分隔
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

void change_dish::on_pushButton_2_clicked()
{
    ui->err->setText("");
    QVector<QString> values;
    values<<ui->lineEdit_2->text()<<ui->lineEdit_3->text()<<ui->lineEdit_5->text();
    Manager *M;



    if(!M->add_dish(values))
    {
        QPalette palette = ui->err->palette();
        palette.setColor(QPalette::Foreground, Qt::red);
        ui->err->setPalette(palette);
        ui->err->setText("菜品编号不能重复");
    }


    QStringList headers;
   headers << "菜品编号" << "菜品名称"<<"价格";
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
                    qDebug()<<item;
                    column++;

                }

            }
}
