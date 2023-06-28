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
    MYSQL conn=Connect::connectDB("localhost","test","test");

    Connect::selectDB(&conn,"users");

    string query="SELECT u.password FROM users AS u WHERE u.login="+this->email+" AND u.password="+this->password;

    if(Connect::readData(&conn,query))
        return true;
       
    return false;
}
bool User::registerUser()
{

}
bool User::checkUserAuth()
{

}
bool User::checkIfLoginExists()
{
    MYSQL conn=Connect::connectDB("localhost","test","test");

    Connect::selectDB(&conn,"users");

    string *emails;

    emails=Connect::readData(&conn,"SELECT u.login FROM user AS u");

    for(int i=0;i<100;i++)
    {
        if(this->email==emails[i])
            return true;

    }

    return false;
}