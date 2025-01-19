#ifndef PAY_H
#define PAY_H

#include <QWidget>
#include"SQLiteDatabase.h"
namespace Ui {
class pay;
}

class pay : public QWidget
{
    Q_OBJECT

public:
    explicit pay(double total,QString account,QWidget *parent = nullptr);
    ~pay();
    double total_price;
    QString account;

private slots:
    void on_pushButton_clicked();

private:
    Ui::pay *ui;
};

#endif // PAY_H
