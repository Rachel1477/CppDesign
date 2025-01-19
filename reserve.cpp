#include "reserve.h"
#include "ui_reserve.h"

reserve::reserve(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reserve)
{
    SQLiteDatabase db("mydatebase.db");
    db.createConnection();
    ui->setupUi(this);
    ui->tablewidget1->clearContents();
    for (int row = 0; row < 3; ++row) {
        for (int column = 0; column < 2; ++column) {
            QTableWidgetItem *item = new QTableWidgetItem("0");
            ui->tablewidget1->setItem(row, column, item);
        }
    }



}

reserve::~reserve()
{
    delete ui;
}

void reserve::on_tableWidget_cellDoubleClicked(int row, int column)
{


}
