// application.cpp
// Simple driver for the Greeter class

#include "src/Greeter.cpp"

using JT::HelloWorld::Greeter;

int main() {
    // Create instances of Greeter
    Greeter worldGreeter("World");
    Greeter bobGreeter("Bob");
    Greeter chainingExample("A");

    // Simple greetings
    worldGreeter.greet();
    bobGreeter.greet();

    // Testing out chained functions
    chainingExample
        .greet()
        .changeGreeted("B")
        .greet()
        .changeGreeted("C")
        .greet()
        .changeGreeted("D")
        .greet();

    return 0;
}
