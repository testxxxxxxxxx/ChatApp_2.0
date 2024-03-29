#include <iostream>
#include "../Classes/Connect.hpp"
#include "../Classes/Auth.hpp"
#include "../Classes/User.hpp"
#include "../Config/DbConfig.hpp"
#include "../Classes/Hash.hpp"

using namespace std;
using namespace ConnectForDatabase;
using namespace AuthSystem;
using namespace UserGetter;
using namespace DbConfig;
using namespace HashData;

Auth Auth::operator=(const Auth &a) const
{

    return Auth((new User("","")),(new Hash()));
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
    MYSQL conn = Connect::connectDB(dbConfig["host"].c_str(),dbConfig["user"].c_str(),dbConfig["password"].c_str());

    Connect::selectDB(&conn,dbConfig["database"].c_str());

    string query = "SELECT u.password FROM users AS u WHERE u.login='"+Connect::escapeString(&conn,this->u->getEmail().c_str())+"' AND u.password='"+Connect::escapeString(&conn,this->u->getPassword().c_str())+"'";

    string *data = Connect::readData(&conn,query);

    if(Connect::readData(&conn,query)!=nullptr)
        return true;
       
    return false;
}
bool Auth::registerUser()
{
    MYSQL conn = Connect::connectDB(dbConfig["host"].c_str(),dbConfig["user"].c_str(),dbConfig["password"].c_str());

    Connect::selectDB(&conn,dbConfig["database"].c_str());

    string query = "INSERT INTO users(login,password) VALUES('"+Connect::escapeString(&conn,this->u->getEmail().c_str())+"','"+Connect::escapeString(&conn,reinterpret_cast<const char *>(this->h->encrypt(this->u->getPassword().c_str())))+"')";

    bool isRegistered = Connect::execQuery(&conn,query) && this->checkIfLoginExists() && this->u->getPassword()!="";

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
    MYSQL conn = Connect::connectDB(dbConfig["host"].c_str(),dbConfig["user"].c_str(),dbConfig["password"].c_str());

    Connect::selectDB(&conn,dbConfig["database"].c_str());

    string *emails;

    emails = Connect::readData(&conn,"SELECT u.login FROM users AS u");

    for(int i=0;i<100;i++)
    {
        if(this->u->getEmail() == emails[i])
            return true;

    }

    return false;
}