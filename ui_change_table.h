/********************************************************************************
** Form generated from reading UI file 'change_table.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_TABLE_H
#define UI_CHANGE_TABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_change_table
{
public:
    QTableWidget *tableWidget;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *err;

    void setupUi(QWidget *change_table)
    {
        if (change_table->objectName().isEmpty())
            change_table->setObjectName(QString::fromUtf8("change_table"));
        change_table->resize(723, 736);
        tableWidget = new QTableWidget(change_table);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 17)
            tableWidget->setRowCount(17);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem18);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(160, 20, 441, 341));
        lineEdit = new QLineEdit(change_table);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(260, 399, 121, 31));
        label = new QLabel(change_table);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 400, 60, 20));
        pushButton = new QPushButton(change_table);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(400, 390, 141, 41));
        pushButton_2 = new QPushButton(change_table);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(450, 599, 171, 41));
        lineEdit_2 = new QLineEdit(change_table);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 579, 151, 31));
        lineEdit_3 = new QLineEdit(change_table);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(270, 630, 151, 31));
        label_2 = new QLabel(change_table);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(123, 601, 61, 21));
        label_3 = new QLabel(change_table);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 400, 54, 12));
        label_4 = new QLabel(change_table);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(193, 590, 91, 21));
        label_5 = new QLabel(change_table);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(120, 630, 91, 31));
        err = new QLabel(change_table);
        err->setObjectName(QString::fromUtf8("err"));
        err->setGeometry(QRect(190, 690, 351, 31));

        retranslateUi(change_table);

        QMetaObject::connectSlotsByName(change_table);
    } // setupUi

    void retranslateUi(QWidget *change_table)
    {
        change_table->setWindowTitle(QCoreApplication::translate("change_table", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("change_table", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("change_table", "size", nullptr));
        label->setText(QCoreApplication::translate("change_table", "\345\210\240\351\231\244", nullptr));
        pushButton->setText(QCoreApplication::translate("change_table", "\345\210\240\351\231\244", nullptr));
        pushButton_2->setText(QCoreApplication::translate("change_table", "\346\267\273\345\212\240", nullptr));
        label_2->setText(QCoreApplication::translate("change_table", "\346\267\273\345\212\240", nullptr));
        label_3->setText(QCoreApplication::translate("change_table", "ID", nullptr));
        label_4->setText(QCoreApplication::translate("change_table", "ID", nullptr));
        label_5->setText(QCoreApplication::translate("change_table", "\346\241\214\344\275\215\345\244\247\345\260\217", nullptr));
        err->setText(QCoreApplication::translate("change_table", "<html><head/><body><p><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change_table: public Ui_change_table {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_TABLE_H
