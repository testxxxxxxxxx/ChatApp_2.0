#include <iostream>
#include "../Classes/Connect.hpp"
#include "../Classes/Auth.hpp"
#include "../Classes/User.hpp"

using namespace std;
using namespace ConnectForDatabase;
using namespace AuthSystem;
using namespace UserGetter;

Auth Auth::operator=(const Auth &a)
{

    return Auth((new User("","")));
}
void Auth::operator()(int o)
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
bool Auth::loginUser()
{
    MYSQL conn=Connect::connectDB("localhost","test","test");

    Connect::selectDB(&conn,"chatAppCpp2");

    string query="SELECT u.password FROM users AS u WHERE u.login='"+Connect::escapeString(&conn,this->u->getEmail().c_str())+"' AND u.password='"+Connect::escapeString(&conn,this->u->getPassword().c_str())+"'";

    string *data=Connect::readData(&conn,query);

    if(Connect::readData(&conn,query)!=nullptr)
        return true;
       
    return false;
}
bool Auth::registerUser()
{
    MYSQL conn=Connect::connectDB("localhost","test","test");

    Connect::selectDB(&conn,"chatAppCpp2");

    string query="INSERT INTO users(login,password) VALUES('"+Connect::escapeString(&conn,this->u->getEmail().c_str())+"','"+Connect::escapeString(&conn,this->u->getPassword().c_str())+"')";

    bool isRegistered=Connect::execQuery(&conn,query) && this->checkIfLoginExists() && this->u->getPassword()!="";

    if(!isRegistered)
        return false;

    return true;
}
bool Auth::checkUserAuth()
{
    if(!this->loginUser())
        return false;

    return true;    
}
bool Auth::checkIfLoginExists()
{
    MYSQL conn=Connect::connectDB("localhost","test","test");

    Connect::selectDB(&conn,"chatAppCpp2");

    string *emails;

    emails=Connect::readData(&conn,"SELECT u.login FROM users AS u");

    for(int i=0;i<100;i++)
    {
        if(this->u->getEmail()==emails[i])
            return true;

    }

    return false;
}