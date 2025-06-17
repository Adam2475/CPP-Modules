#include <iostream>
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

// project create one derived and 3 child classes

// RTTI: RunTime Type Identification

// dynamic_cast <new_type>(expression)

// the dynamic cast convert data in runtime
// mainly used in inherited class hierarchies for
// safely cast the base class pointer reference to derived class
// (called downcasting)
// to dynamic cast we need at least one virtual function

// use static_cast if you are sure you will never cast into the wrong object

Base* generate();
void identify(Base* p);
void identify(Base& p);

int main() {
    Base* obj = generate();

    std::cout << "Identify using pointer: ";
    identify(obj);

    std::cout << "Identify using reference: ";
    identify(*obj);

    delete obj;
    return 0;
}