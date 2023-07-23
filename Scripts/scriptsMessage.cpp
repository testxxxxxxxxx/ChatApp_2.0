#include <iostream>
#include "../Classes/Message.hpp"
#include "../Classes/User.hpp"
#include "../Classes/Connect.hpp"

using namespace std;
using namespace MessageSystem;
using namespace UserGetter;
using namespace ConnectForDatabase;

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
    MYSQL conn=Connect::connectDB("localhost","test","test");

    Connect::selectDB(&conn,"chatAppCpp2");

    string query="INSERT INTO messages(from,to,content) VALUES('"+Connect::escapeString(&conn,(const char *)this->user->getId())+"',"+Connect::escapeString(&conn,(const char *)to->getId())+"',"+Connect::escapeString(&conn,this->content.c_str())+"')";

    if(!Connect::execQuery(&conn,query))
        return false;
    
    return true;

}
string *Message::getMessage()
{
    MYSQL conn=Connect::connectDB("localhost","test","test");

    Connect::selectDB(&conn,"chatAppCpp2");

    string query="SELECT m.from,m.to,m.content FROM messages AS m WHERE m.to="+this->user->getId();

    string *data = Connect::readData(&conn,query);

    return data;
}