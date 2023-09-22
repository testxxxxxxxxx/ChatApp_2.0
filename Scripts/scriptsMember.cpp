#include <iostream>
#include "../Classes/Member.hpp"
#include "../Classes/Connect.hpp"

using namespace std;
using namespace Members;
using namespace ConnectForDatabase;

Member Member::operator=(const Member &m) const
{

    return *this;
}
void Member::operator()(int o)
{
    int a = 5;
    int b = 4;

    auto f = [&a, &b](int *te) -> int
    {
        *te = 5;
        te++;

        return *te;
    };

}
bool Member::checkPrivileges(int groupId, int userId)
{
    MYSQL conn = Connect::connectDB("", "", "");

    Connect::selectDB(&conn, "");

    string query = "SELECT m.userId FROM members AS m WHERE m.groupId="
    +Connect::escapeString(&conn, reinterpret_cast<const char *>(groupId))
    +" AND m.userId="
    +Connect::escapeString(&conn, reinterpret_cast<const char *>(userId));

    if(Connect::readData(&conn, query) != nullptr)
        return true;

    return false;
}