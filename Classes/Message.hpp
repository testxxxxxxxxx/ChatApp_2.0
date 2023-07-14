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
        string content;

        public:

            Message(int id,int from,int to,string content) : id(id),from(from),to(to),content(content)
            {
                this->id=id;
                this->from=from;
                this->to=to;
                this->content=content;

            }
            virtual ~Message()=default;

            Message operator=(const Message &m);

            void operator()(int o);

            bool createMessage();
            string getMessage();

    };

};

#endif