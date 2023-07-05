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

    Connect::selectDB(&conn,"chatAppCpp2");

    string query="SELECT u.password FROM users AS u WHERE u.login='"+Connect::escapeString(&conn,this->email.c_str())+"' AND u.password='"+Connect::escapeString(&conn,this->password.c_str())+"'";

    string *data=Connect::readData(&conn,query);

    if(Connect::readData(&conn,query)!=nullptr)
        return true;
       
    return false;
}
bool User::registerUser()
{
    MYSQL conn=Connect::connectDB("localhost","test","test");

    Connect::selectDB(&conn,"chatAppCpp2");

    string query="INSERT INTO users(login,password) VALUES('"+Connect::escapeString(&conn,this->email.c_str())+"','"+Connect::escapeString(&conn,this->password.c_str())+"')";

    if(!Connect::execQuery(&conn,query) && this->checkIfLoginExists())
        return false;

    return true;
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