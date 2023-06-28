#include <iostream>
#include "Classes/Connect.hpp"
#include "Classes/User.hpp"

using namespace std;
using namespace ConnectForDatabase;
using namespace AuthSystem;

int main(int agrc,char *agrv[])
{
    User *u=new User("Test@example.com","Test");

    cout<<u->loginUser()<<endl;

    return 0;
}