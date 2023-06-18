#include <iostream>
#include "../Classes/Connect.hpp"
#include <mysql/mysql.h>
#include <cstdarg>

using namespace std;
using namespace ConnectForDatabase;

extern char Connect::*host;
extern char Connect::*user;
extern char Connect::*password;
extern string Connect::data[100];

Connect Connect::operator=(const Connect &c)
{

    return Connect();
}
void Connect::connectDB(char *host0,char *user0,char *password0)
{
    MYSQL *conn;
    
    conn=mysql_init(nullptr);

    if(!(conn=mysql_real_connect(conn,host0,user0,password0,"mysql",0,NULL,0)))
        throw mysql_errno(conn);

    return;
}
void Connect::selectDB(MYSQL *conn,const char *table)
{
    if(!mysql_select_db(conn,table))
        throw mysql_errno(conn);

    return;
}
string *Connect::readData(MYSQL *conn,string query)
{
    MYSQL_RES *res;
    MYSQL_ROW row;

    const char *cQuery=query.c_str();

    if(!mysql_query(conn,cQuery))
        throw mysql_errno(conn);

    res=mysql_store_result(conn);

    while((row=mysql_fetch_row(res))!=nullptr)
    {
        for(int i=0;i<=mysql_num_fields(res);i++)
        {
            data[i]=row[i];

        }

    }

    return data;
}
bool Connect::execQuery(MYSQL *conn,string query)
{
    const char *cQuery=query.c_str();

    if(!mysql_query(conn,cQuery))
        return false;

    return true;
}
bool Connect::insertData(MYSQL *conn,string table,int numberOfCoumns,...)
{
    va_list columns;
    va_start(columns,numberOfCoumns);

    Connect::emptyData();

    for(int i=0;i<numberOfCoumns;i++)
    {
        data[i] = va_arg(columns,string);

    }

    va_end(columns);

    string query;
    string queryA;
    string queryF;

    for(int v=0;v<numberOfCoumns;v++)
    {
        queryA+=data[v]+",";

    }

    for(int i=0;i<numberOfCoumns-1;i++)
    {
        queryF+=queryA[i];

    }

    query="INSERT INTO "+table+"("+queryF+")";

    const char *cQuery=query.c_str();

    if(!mysql_query(conn,cQuery))
        return false;

    return true;
}
bool Connect::updateData(MYSQL *conn)
{

}
bool Connect::deleteData(MYSQL *conn)
{
    
}
void Connect::closeDB(MYSQL *conn)
{
    mysql_close(conn);

    return;
}
void Connect::emptyData()
{
    for(int i=0;i<100;i++)
    {
        data[i]="";

    }

}