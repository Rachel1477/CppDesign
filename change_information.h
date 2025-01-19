#ifndef CHANGE_INFORMATION_H
#define CHANGE_INFORMATION_H
#include"SQLiteDatabase.h"
#include <QWidget>
#include"Customer.h"
namespace Ui {
class Change_information;
}

class Change_information : public QWidget
{
    Q_OBJECT

public:
    explicit Change_information(QWidget *parent = nullptr);
    ~Change_information();
    QString account;

private slots:
    void on_pushButton_clicked();

private:
    Ui::Change_information *ui;
};

#endif // CHANGE_INFORMATION_H
