#include <iostream>
#include "../Classes/Connect.hpp"
#include <mysql/mysql.h>

using namespace std;
using namespace ConnectForDatabase;

Connect Connect::operator=(const Connect &c)
{

    return Connect();
}
string Connect::*readData(MYSQL *conn)
{

}
bool Connect::insertData(MYSQL *conn)
{

}
bool Connect::updateData(MYSQL *conn)
{

}
bool Connect::deleteData(MYSQL *conn)
{
    
}