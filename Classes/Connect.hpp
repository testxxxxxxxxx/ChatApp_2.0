#include <iostream>
#include <mysql/mysql.h>

using namespace std;

#pragma once

namespace ConnectForDatabase
{
    class Connect
    {
        static string host;
        static string user;
        static string password;

        public: 

            Connect()
            {

            }
            virtual ~Connect()=default;

            Connect operator=(const Connect &c);

            static MYSQL connectDB();
            static string *readData(MYSQL *conn);
            static bool insertData(MYSQL *conn);
            static bool updateData(MYSQL *conn);
            static bool deleteData(MYSQL *conn);
            static void closeDB(MYSQL *conn);

    };
    
};