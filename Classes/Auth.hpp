#ifndef authVar

#include <iostream>
#include "User.hpp"

using namespace std;
using namespace UserGetter;

#define authVar 1

namespace AuthSystem
{
    class Auth
    {
        bool isLogin=false;
        User *u;

        public:

            Auth(User *u)
            {
                this->u=u;

            }
            virtual ~Auth()=default;

            Auth operator=(const Auth &u);

            void operator()(int o);

            bool loginUser();
            bool registerUser();
            bool checkUserAuth();

        private:

            bool checkIfLoginExists();

    };

};

#endif