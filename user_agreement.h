#ifndef USER_AGREEMENT_H
#define USER_AGREEMENT_H

#include <QWidget>

namespace Ui {
class User_Agreement;
}

class User_Agreement : public QWidget
{
    Q_OBJECT

public:
    explicit User_Agreement(QWidget *parent = nullptr);
    ~User_Agreement();

private:
    Ui::User_Agreement *ui;
};

#endif // USER_AGREEMENT_H
