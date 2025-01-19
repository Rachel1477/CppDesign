/********************************************************************************
** Form generated from reading UI file 'pay.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAY_H
#define UI_PAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pay
{
public:
    QWidget *widget;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *total;

    void setupUi(QWidget *pay)
    {
        if (pay->objectName().isEmpty())
            pay->setObjectName(QString::fromUtf8("pay"));
        pay->resize(598, 570);
        widget = new QWidget(pay);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 60, 621, 551));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 50, 161, 161));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/R-C.jpg);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 400, 191, 71));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 290, 251, 61));
        total = new QLabel(pay);
        total->setObjectName(QString::fromUtf8("total"));
        total->setGeometry(QRect(240, 350, 311, 61));

        retranslateUi(pay);

        QMetaObject::connectSlotsByName(pay);
    } // setupUi

    void retranslateUi(QWidget *pay)
    {
        pay->setWindowTitle(QCoreApplication::translate("pay", "Form", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("pay", "\345\256\214\346\210\220\346\224\257\344\273\230", nullptr));
        label_2->setText(QCoreApplication::translate("pay", "<html><head/><body><p><span style=\" font-size:16pt;\">\346\200\273\344\273\267</span></p></body></html>", nullptr));
        total->setText(QCoreApplication::translate("pay", "<html><head/><body><p><span style=\" font-size:26pt;\">1</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pay: public Ui_pay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAY_H
