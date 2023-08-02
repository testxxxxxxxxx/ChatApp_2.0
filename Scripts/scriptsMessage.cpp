#include <iostream>
#include "../Classes/Message.hpp"
#include "../Classes/User.hpp"
#include "../Classes/Connect.hpp"
#include "../Config/DbConfig.cpp"

using namespace std;
using namespace MessageSystem;
using namespace UserGetter;
using namespace ConnectForDatabase;
using namespace DbConfig;

Message Message::operator=(const Message &m)
{

    return Message(0,(new User("","")),0,"");
}
void Message::operator()(int o)
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
bool Message::createMessage(User *to)
{
    MYSQL conn=Connect::connectDB(dbConfig["host"].c_str(),dbConfig["user"].c_str(),dbConfig["password"].c_str());

    Connect::selectDB(&conn,dbConfig["database"].c_str());

    string query="INSERT INTO messages(from,to,content) VALUES('"+Connect::escapeString(&conn,(const char *)this->user->getId())+"',"+Connect::escapeString(&conn,(const char *)to->getId())+"',"+Connect::escapeString(&conn,this->content.c_str())+"')";

    if(!Connect::execQuery(&conn,query))
        return false;
    
    return true;

}
string *Message::getMessage()
{
    MYSQL conn=Connect::connectDB(dbConfig["host"].c_str(),dbConfig["user"].c_str(),dbConfig["password"].c_str());

    Connect::selectDB(&conn,dbConfig["database"].c_str());

    string query="SELECT m.from,m.to,m.content FROM messages AS m WHERE m.to="+Connect::escapeString(&conn,(const char *)this->user->getId());

    string *data = Connect::readData(&conn,query);

    return data;
}