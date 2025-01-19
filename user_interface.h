#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H
#include"reserve_dish.h"
#include <QWidget>
#include"change_information.h"
#include"reserve_tabelandtime.h"
#include"order_ui.h"
namespace Ui {
class user_interface;
}

class user_interface : public QWidget
{
    Q_OBJECT

public:
    explicit user_interface(QString account,QWidget *parent = nullptr);
    ~user_interface();
    QString account;
    QString name;
    QString phone;
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::user_interface *ui;
};

#endif // USER_INTERFACE_H
