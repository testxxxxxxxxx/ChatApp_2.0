#include <iostream>
#include "../Classes/User.hpp"
#include "../Classes/Connect.hpp"

using namespace std;
using namespace UserGetter;
using namespace ConnectForDatabase;

User User::operator=(const User &u) const
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
int User::getId()
{
    MYSQL conn=Connect::connectDB("localhost","root","root");

    Connect::selectDB(&conn,"chatAppCpp2");

    string query="SELECT u.id FROM users AS u WHERE u.login='"+Connect::escapeString(&conn,this->email.c_str())+"'";

    string *idH = Connect::readData(&conn,query);
    string idS = *idH;

    string::size_type sz;

    int id = stoi(idS,&sz);

    return id;
}
string User::getEmail()
{

    return this->email;
}
string User::getPassword()
{

    return this->password;
}