#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

// being MutantStack a template class it must be 

// using the STL (standard template library) stack container

// std::stack is a container adapter, using std::deque by default
// it stores it as a protected member called c

// we can acces that member inheriting from stack and expose the iterators
template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack &other) : std::stack<T>(other) {}
        ~MutantStack() {}

        MutantStack &operator=(const MutantStack &other)
        {
            std::stack<T>::operator=(other);
            return *this;
        }

        // to make the stack to use iterators we take it from the
        // original deque type

        typedef typename std::stack<T>::container_type::iterator iterator;
        // return begin and end from the deque underneath
        iterator begin() { return this->c.begin(); }
        iterator end() { return this->c.end(); }
};

#endif