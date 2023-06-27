#ifndef userVar

#include <iostream>

using namespace std;

#define userVar 1

namespace AuthSystem
{
    class User
    {
        string email;
        string password;
        bool isLogin=false;

        public:

            User(string e,string p) : email(e),password(p)
            {
                this->email=e;
                this->password=p;

            }
            virtual ~User()=default;

            User operator=(const User &u);

            void operator()(int o);

            bool loginUser();
            bool registerUser();
            bool checkUserAuth();

        private:

            bool checkIfLoginExists();

    };

};

#endif