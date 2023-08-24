#ifndef hashVar

#include <iostream>
#include <functional>

using namespace std;

#define hashVar 1

namespace HashData
{
    class Hash
    {
        string text;

        public:

            Hash()
            {

            } 
            virtual ~Hash() = default;

            Hash operator=(const Hash &h) const;

            void operator()(int o);

            size_t encrypt(string text);

    };

};

#endif