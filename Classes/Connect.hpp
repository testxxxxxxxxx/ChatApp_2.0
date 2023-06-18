#ifndef connectVar

#include <iostream>
#include <mysql/mysql.h>

using namespace std;

#define connectVar
#pragma once

namespace ConnectForDatabase
{
    class Connect
    {
        static char *host;
        static char *user;
        static char *password;
        static string data[100];

        public: 

            Connect()
            {

            }
            virtual ~Connect()=default;

            Connect operator=(const Connect &c);

            static void connectDB(char *host0,char *user0,char *password0);
            static void selectDB(MYSQL *conn,const char *table);
            static string *readData(MYSQL *conn,string query);
            static bool execQuery(MYSQL *conn,string query);
            static bool insertData(MYSQL *conn,string table,int numberOfColumns,...);
            static bool updateData(MYSQL *conn);
            static bool deleteData(MYSQL *conn);
            static void closeDB(MYSQL *conn);
            static void emptyData();

    };
    
};

#endif