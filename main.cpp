#include "mainwindow.h"
#include "Register.h"
#include<CDateSourceSQLite.h>
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug> // 包含QDebug头文件
#include "SQLiteDatabase.h"
#include <QVector>
#include <QVariant>
#include<iostream>
#include <QCoreApplication>
#include <QDebug>
#include "SQLiteDatabase.h"
#include"Dialog_.h"
#include"center_system.h"
#include"reserve_dish.h"
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QTimer>
#include <QDateTime>
#include"change_table.h"
#include"change_dish.h"
#include<iostream>
using namespace  std;
int main(int argc, char *argv[]) {
    QApplication a(argc, argv); // 创建 QApplication 实例
    Dialog_ w;
    w.show();
    return a.exec(); // 启动事件循环

            // 打印结果


}
//class TimeDisplayWidget : public QWidget {
//public:
//    TimeDisplayWidget(QWidget *parent = nullptr) : QWidget(parent) {
//        // 设置窗口标题
//        setWindowTitle("显示本地时间");

//        // 创建标签用于显示时间
//        timeLabel = new QLabel(this);
//        timeLabel->setAlignment(Qt::AlignTop | Qt::AlignRight);

//        // 创建布局并添加标签
//        QVBoxLayout *layout = new QVBoxLayout(this);
//        layout->addWidget(timeLabel);

//        // 设置布局的边距，使标签位于窗口的最右上角
//        layout->setContentsMargins(0, 0, 0, 0);

//        // 设置定时器，每秒更新时间
//        QTimer *timer = new QTimer(this);
//        connect(timer, &QTimer::timeout, this, &TimeDisplayWidget::updateTime);
//        timer->start(1000);

//        // 更新时间
//        updateTime();
//    }

//private slots:
//    void updateTime() {
//        // 获取当前时间并更新标签
//        timeLabel->setText(QDateTime::currentDateTime().toString("yyyy-MM-dd HH:mm:ss"));
//    }

//private:
//    QLabel *timeLabel;
//};


