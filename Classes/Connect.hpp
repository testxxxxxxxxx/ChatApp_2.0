#ifndef connectVar

#include <iostream>
#include <mysql/mysql.h>

using namespace std;

#define connectVar 1
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

            static MYSQL connectDB(const char *host0,const char *user0,const char *password0);
            static void selectDB(MYSQL *conn,const char *table);
            static string *readData(MYSQL *conn,string query);
            static bool execQuery(MYSQL *conn,string query);
            static void closeDB(MYSQL *conn);

    };
    
};

#endif