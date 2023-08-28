#include <iostream>
#include "Classes/Connect.hpp"
#include "Classes/Auth.hpp"
#include "Classes/User.hpp"
#include "Classes/Hash.hpp"

using namespace std;
using namespace AuthSystem;
using namespace UserGetter;
using namespace HashData;

int main(int agrc,char *agrv[])
{
    Auth *a=new Auth((new User("Test@example.pl","Password")),(new Hash()));

    cout<<a->loginUser()<<endl;

    return 0;
}