#include <iostream>
#include "../Classes/Connect.hpp"
#include "../Classes/User.hpp"

using namespace std;
using namespace ConnectForDatabase;
using namespace AuthSystem;

User User::operator=(const User &u)
{

    return User(this->email,this->password);
}
void User::operator()(int o)
{
    int a=5;
    int b=4;

    auto f=[&a,&b](int *te)->int
    {
        *te=5;
        te++;

        return *te;
    };

}
bool User::loginUser()
{

}
bool User::registerUser()
{

}
bool User::checkUserAuth()
{

}
bool User::checkIfLoginExists()
{

}