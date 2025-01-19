#ifndef RESERVE_TABELANDTIME_H
#define RESERVE_TABELANDTIME_H
#include"SQLiteDatabase.h"
#include <QWidget>
#include"reserve_dish.h"
#include"Customer.h"
namespace Ui {
class reserve_tabelandtime;
}

class reserve_tabelandtime : public QWidget
{
    Q_OBJECT

public:
    explicit reserve_tabelandtime(QWidget *parent = nullptr);
    ~reserve_tabelandtime();
     QVector<QString> values;
     QString account;
     QString name;
     QString phone;
     static int a;

private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::reserve_tabelandtime *ui;
};

#endif // RESERVE_TABELANDTIME_H
