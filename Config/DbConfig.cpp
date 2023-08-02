#include <iostream>
#include <map>

using namespace std;

namespace DbConfig
{
    map<string,string> dbConfig{
    {"host","172.17.0.4"},
    {"user","project@172.17.0.3"},
    {"password","project"},
    {"database","chatAppCpp2"}
    };

};