#ifndef ORDER_UI_H
#define ORDER_UI_H

#include <QWidget>
#include"SQLiteDatabase.h"
#include"Customer.h"
namespace Ui {
class order_ui;
}

class order_ui : public QWidget
{
    Q_OBJECT

public:
    explicit order_ui(    QString account,QWidget *parent = nullptr);
    ~order_ui();
    QString account;
private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::order_ui *ui;
};

#endif // ORDER_UI_H
