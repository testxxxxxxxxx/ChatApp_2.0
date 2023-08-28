#ifndef GROUP_HPP

#define GROUP_HPP 1

#include <iostream>

using namespace std;

#pragma once

namespace Groups
{
    class Group
    {
        int id;
        string name;

        public:

        Group(string name) : name(name)
        {

        }
        virtual ~Group() = default;

        Group operator=(const Group &g);

        void operator()(int o);

        int getId();
        string getName();
        bool create();

    };

};

#endif