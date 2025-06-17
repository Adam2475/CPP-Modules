#include <cstdlib>
#include <ctime>
#include <iostream>
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

Base* generate() 
{
    std::srand(static_cast<unsigned>(std::time(NULL)));
    int random = std::rand() % 3;

    switch (random)
    {
        case 0:
            std::cout << "Generated: A" << std::endl;
            return new A();
        case 1:
            std::cout << "Generated: B" << std::endl;
            return new B();
        default:
            std::cout << "Generated: C" << std::endl;
            return new C();
    }
}