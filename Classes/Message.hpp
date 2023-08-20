#ifndef messageVar

#include <iostream>
#include "User.hpp"

using namespace std;
using namespace UserGetter;

#pragma once

#define messageVar 1

namespace MessageSystem
{
    class Message
    {
        int id,from,to;
        User *user;
        string content;

        public:

            Message(int id,User *user,int to,string content) : id(id),user(user),to(to),content(content)
            {
                this->id = id;
                this->from = user->getId();
                this->to = to;
                this->content = content;

            }
            virtual ~Message() = default;

            Message operator=(const Message &m) const;

            void operator()(int o);

            bool createMessage(User *to);
            string *getMessage();

    };

};

#endif