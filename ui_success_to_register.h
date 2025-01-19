/********************************************************************************
** Form generated from reading UI file 'success_to_register.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESS_TO_REGISTER_H
#define UI_SUCCESS_TO_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_success_to_register
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *success_to_register)
    {
        if (success_to_register->objectName().isEmpty())
            success_to_register->setObjectName(QString::fromUtf8("success_to_register"));
        success_to_register->resize(648, 393);
        label = new QLabel(success_to_register);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(240, 60, 241, 101));
        pushButton = new QPushButton(success_to_register);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 180, 151, 41));

        retranslateUi(success_to_register);

        QMetaObject::connectSlotsByName(success_to_register);
    } // setupUi

    void retranslateUi(QWidget *success_to_register)
    {
        success_to_register->setWindowTitle(QCoreApplication::translate("success_to_register", "Form", nullptr));
        label->setText(QCoreApplication::translate("success_to_register", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600;\">\346\263\250\345\206\214\346\210\220\345\212\237</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("success_to_register", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class success_to_register: public Ui_success_to_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESS_TO_REGISTER_H
