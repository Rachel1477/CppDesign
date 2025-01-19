#include "CDateSourceSQLite.h"
#include<QDebug>
CDateSourceSQLite::CDateSourceSQLite()
{
    m_db=QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("mydatabase.db"); // 设置数据库文件名
    if(!m_db.open())
    {
        qDebug()<<"failed to open datebase";
            return;
    }
}
CDateSourceSQLite::~CDateSourceSQLite()
{

}
