#ifndef MEMBER_HPP

#define MEMBER_HPP 1

#include <iostream>
#include "Group.hpp"
#include "User.hpp"

using namespace std;
using namespace Groups;
using namespace UserGetter;

namespace Members
{
    class Member
    {
        Group *group;
        User *user;

        public:

           Member(Group *group, User *user) : group(group), user(user)
           {

           }
           virtual ~Member() = default;

    };

};

#endif