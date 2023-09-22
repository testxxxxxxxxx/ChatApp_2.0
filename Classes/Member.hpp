#ifndef MEMBER_HPP

#define MEMBER_HPP 1

#include <iostream>

using namespace std;

namespace Members
{
    class Member
    {
        public:

           Member()
           {

           }
           virtual ~Member() = default;

           Member operator=(const Member &m) const;

           void operator()(int o);

           bool checkPrivileges(int groupId, int userId);

    };

};

#endif