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
        hash<string> strHash;

        public:

            Hash(string text): text(text)
            {
                this->text=text;

            } 
            virtual ~Hash()=default;

            Hash operator=(const Hash &h) const;

            void operator()(int o);

            string encrypt();
            string decrypt();

    };

};

#endif