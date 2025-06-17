#include "../inc/MutantStack.hpp"
#include <iostream>
#include <list>

int main() {
    MutantStack<int> mstack;
    // std::stack test;

    mstack.push(5);
    mstack.push(17);
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    return 0;
}