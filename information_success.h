#ifndef INFORMATION_SUCCESS_H
#define INFORMATION_SUCCESS_H

#include <QWidget>

namespace Ui {
class information_success;
}

class information_success : public QWidget
{
    Q_OBJECT

public:
    explicit information_success(QWidget *parent = nullptr);
    ~information_success();

private slots:
    void on_pushButton_clicked();

private:
    Ui::information_success *ui;
};

#endif // INFORMATION_SUCCESS_H
