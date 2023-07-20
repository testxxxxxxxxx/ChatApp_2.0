#ifndef userVar

#include <iostream>

using namespace std;

#pragma once

#define userVar 1

namespace UserGetter
{
    class User
    {
        int id;
        string email,password;

        public:

            User(string email,string password="") : email(email),password(password)
            {
                this->email=email;
                this->password=password;

            }
            virtual ~User()=default;

            User operator=(const User &u);

            void operator()(int o);

            int getId();
            string getEmail();
            string getPassword();

    };

};

#endif