/********************************************************************************
** Form generated from reading UI file 'user_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_INTERFACE_H
#define UI_USER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user_interface
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *widget;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *user_interface)
    {
        if (user_interface->objectName().isEmpty())
            user_interface->setObjectName(QString::fromUtf8("user_interface"));
        user_interface->resize(1256, 1038);
        user_interface->setMaximumSize(QSize(16777215, 16777215));
        pushButton = new QPushButton(user_interface);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(150, 270, 221, 91));
        pushButton_2 = new QPushButton(user_interface);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 260, 261, 91));
        pushButton_3 = new QPushButton(user_interface);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(360, 480, 221, 101));
        widget = new QWidget(user_interface);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(100, 20, 361, 80));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 50, 401, 91));
        label_2 = new QLabel(user_interface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 70, 581, 141));

        retranslateUi(user_interface);

        QMetaObject::connectSlotsByName(user_interface);
    } // setupUi

    void retranslateUi(QWidget *user_interface)
    {
        user_interface->setWindowTitle(QCoreApplication::translate("user_interface", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("user_interface", "\344\277\256\346\224\271\344\277\241\346\201\257", nullptr));
        pushButton_2->setText(QCoreApplication::translate("user_interface", "\351\242\204\347\272\246", nullptr));
        pushButton_3->setText(QCoreApplication::translate("user_interface", "\346\237\245\347\234\213\350\256\242\345\215\225", nullptr));
        label->setText(QCoreApplication::translate("user_interface", "<html><head/><body><p>Hi,</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("user_interface", "<html><head/><body><p><span style=\" font-size:72pt;\">TextLabel</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class user_interface: public Ui_user_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_INTERFACE_H
