#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include "ui_Register.h"
#include"user_agreement.h"
#include"SQLiteDatabase.h"
#include"success_to_register.h"
namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private slots:
    void on_pushButton_2_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_clicked();

private:
    Ui::Register *ui;
    bool agree =false;
};

#endif // REGISTER_H
