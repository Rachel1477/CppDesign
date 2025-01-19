/********************************************************************************
** Form generated from reading UI file 'change_information.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_INFORMATION_H
#define UI_CHANGE_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Change_information
{
public:
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_2;
    QLabel *err1;
    QLabel *err2;

    void setupUi(QWidget *Change_information)
    {
        if (Change_information->objectName().isEmpty())
            Change_information->setObjectName(QString::fromUtf8("Change_information"));
        Change_information->resize(856, 792);
        pushButton = new QPushButton(Change_information);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(190, 460, 161, 61));
        layoutWidget = new QWidget(Change_information);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 110, 281, 311));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        err1 = new QLabel(Change_information);
        err1->setObjectName(QString::fromUtf8("err1"));
        err1->setGeometry(QRect(380, 150, 371, 31));
        err2 = new QLabel(Change_information);
        err2->setObjectName(QString::fromUtf8("err2"));
        err2->setGeometry(QRect(380, 280, 501, 41));

        retranslateUi(Change_information);

        QMetaObject::connectSlotsByName(Change_information);
    } // setupUi

    void retranslateUi(QWidget *Change_information)
    {
        Change_information->setWindowTitle(QCoreApplication::translate("Change_information", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Change_information", "\344\277\256\346\224\271", nullptr));
        label_3->setText(QCoreApplication::translate("Change_information", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("Change_information", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Change_information", "\345\257\206\347\240\201", nullptr));
        err1->setText(QCoreApplication::translate("Change_information", "<html><head/><body><p><br/></p></body></html>", nullptr));
        err2->setText(QCoreApplication::translate("Change_information", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Change_information: public Ui_Change_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_INFORMATION_H
