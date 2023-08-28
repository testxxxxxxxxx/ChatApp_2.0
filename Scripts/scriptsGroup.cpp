#include <iostream>
#include "../Classes/Group.hpp"
#include "../Classes/Connect.hpp"

using namespace std;
using namespace Groups;
using namespace ConnectForDatabase;

Group Group::operator=(const Group &g)
{

    return Group("");
}
void Group::operator()(int o)
{
    int a = 5;
    int b = 4;

    auto f=[&a,&b](int *te)->int
    {
        *te=5;
        te++;

        return *te;
    };

}
int Group::getId()
{
    MYSQL conn = Connect::connectDB("","","");

    Connect::selectDB(&conn,"");

    string query = "SELECT g.id FROM groups AS g WHERE g.name='"+Connect::escapeString(&conn,this->name.c_str())+"'";

    string *idH = Connect::readData(&conn,query);

    string idS = *idH;

    int id = stoi(idS);

    return id;
}
string Group::getName()
{

    return this->name;
}
bool Group::create()
{
    MYSQL conn = Connect::connectDB("","","");

    Connect::selectDB(&conn,"");

    string query = "INSERT INTO groups(name) VALUES('"+Connect::escapeString(&conn,this->name.c_str())+"')";

    bool state = Connect::execQuery(&conn,query);

    if(!state)
        return false;

    return true;
}