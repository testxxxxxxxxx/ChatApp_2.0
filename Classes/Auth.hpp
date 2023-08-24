#ifndef authVar

#include <iostream>
#include "User.hpp"
#include "Hash.hpp"

using namespace std;
using namespace UserGetter;
using namespace HashData;

#define authVar 1

namespace AuthSystem
{
    class Auth
    {
        bool isLogin=false;
        User *u;
        Hash *h;

        public:

            Auth(User *u,Hash *h)
            {
                this->u=u;
                this->h=h;

            }
            virtual ~Auth()=default;

            Auth operator=(const Auth &u) const;

            void operator()(int o);

            bool loginUser();
            bool registerUser();
            bool checkUserAuth();

        private:

            bool checkIfLoginExists();

    };

};

#endif