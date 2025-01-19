#ifndef CDATESOURCESQLITE_H
#define CDATESOURCESQLITE_H
#include<QSqlDatabase>
class CDateSourceSQLite
{

public:
    CDateSourceSQLite();
    ~CDateSourceSQLite();
private:
    QSqlDatabase m_db;  //数据库链接

};

#endif
