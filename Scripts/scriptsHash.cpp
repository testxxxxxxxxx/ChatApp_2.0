#include <iostream>
#include "../Classes/Hash.hpp"
#include <functional>

using namespace std;
using namespace HashData;

Hash Hash::operator=(const Hash &h) const
{

    return Hash("");
}
void Hash::operator()(int o)
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
size_t Hash::encrypt()
{
    size_t encrypted = hash<string>{}(this->text);

    return encrypted;
}
size_t Hash::decrypt()
{

}