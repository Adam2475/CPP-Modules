#include <iostream>
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

// take a pointer to a base object
// dynamic_cast attempt to cast in each type
// the successfull one will be our type

// ptr: can be null
//      can change where it points
//      hold memory address

// if dynamic_cast fails with a pointers it return nullptr

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

// take a reference to the object

// ref: is an alias for an existing object
//      can't change reference after initialization
//      can't be null

// ref == the actual object it refers to, just with a different name.

// if dynamic_cast fails with a pointers it throws std::bad_cast
void identify(Base& p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    } catch (...) {}
}