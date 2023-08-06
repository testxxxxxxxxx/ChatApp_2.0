#ifndef dbConfigVar

#include <iostream>
#include <map>

using namespace std;

#define dbConfigVar 1

#pragma once

namespace DbConfig
{
    map<string,string> dbConfig{
    {"host","172.17.0.4"},
    {"user","project@172.17.0.3"},
    {"password","project"},
    {"database","chatAppCpp2"}
    };

};

#endif