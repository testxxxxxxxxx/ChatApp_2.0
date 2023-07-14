#include <iostream>
#include "Classes/Connect.hpp"
#include "Classes/Auth.hpp"
#include "Classes/User.hpp"

using namespace std;
using namespace AuthSystem;
using namespace UserGetter;

int main(int agrc,char *agrv[])
{
    Auth *a=new Auth((new User("Test@example.pl","Password")));

    cout<<a->loginUser()<<endl;

    return 0;
}