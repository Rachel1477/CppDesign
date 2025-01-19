#ifndef RESERVE_DISH_H
#define RESERVE_DISH_H
#include"SQLiteDatabase.h"
#include <QWidget>
#include <QVector>
#include"string"
#include"pay.h"
#include"Customer.h"
using namespace  std;
namespace Ui {
class reserve_dish;
}

class reserve_dish : public QWidget
{
    Q_OBJECT

public:
    explicit reserve_dish(QWidget *parent = nullptr);
    ~reserve_dish();
    QString account;
    QVector<QString> values;
    string record;
    int M_index=0;

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::reserve_dish *ui;
};

#endif // RESERVE_DISH_H
