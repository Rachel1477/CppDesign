/********************************************************************************
** Form generated from reading UI file 'Dialog_.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG__H
#define UI_DIALOG__H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog_
{
public:
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *error_label;

    void setupUi(QWidget *Dialog_)
    {
        if (Dialog_->objectName().isEmpty())
            Dialog_->setObjectName(QString::fromUtf8("Dialog_"));
        Dialog_->resize(629, 526);
        widget = new QWidget(Dialog_);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(150, 140, 291, 111));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_3 = new QLabel(Dialog_);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 90, 101, 41));
        pushButton = new QPushButton(Dialog_);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 290, 181, 71));
        pushButton_2 = new QPushButton(Dialog_);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 290, 171, 71));
        error_label = new QLabel(Dialog_);
        error_label->setObjectName(QString::fromUtf8("error_label"));
        error_label->setGeometry(QRect(240, 250, 341, 31));

        retranslateUi(Dialog_);

        QMetaObject::connectSlotsByName(Dialog_);
    } // setupUi

    void retranslateUi(QWidget *Dialog_)
    {
        Dialog_->setWindowTitle(QCoreApplication::translate("Dialog_", "Form", nullptr));
        label->setText(QCoreApplication::translate("Dialog_", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_", "\347\231\273\351\231\206\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("Dialog_", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dialog_", "\346\263\250\345\206\214", nullptr));
        error_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog_: public Ui_Dialog_ {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG__H
