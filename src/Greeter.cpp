// Greeter.cpp

#include "Greeter.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

namespace JT
{
    namespace HelloWorld
    {
        Greeter::Greeter(string input)
        {
            greeted = input;
        }

        Greeter Greeter::changeGreeted(string input)
        {
            greeted = input;
            return *this;
        }

        Greeter Greeter::greet()
        {
            cout << "Hello, " << greeted << "!" << endl;
            return *this;
        }
    }
}
