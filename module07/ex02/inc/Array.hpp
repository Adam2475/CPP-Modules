#ifndef ARRAY_H
# define ARRAY_H

// for exceptions
#include <stdexcept>
// for size_t
#include <cstddef>
// for NULL
#include <cstdlib> 
#include <iostream>
#include <string>
#include <cstdlib>

// creo un template per un array generico
template<typename T>
class Array {
    public:
        // constructor with no parameter
        Array();
        // constructor with size parameter
        Array(unsigned int n);
        // copy constructor
        Array(Array const &src);
        // default destructor
        ~Array();
        // assignement overload
        Array& operator=(const Array& ptref);

        // Subscription operator for accessing the array
        // non const
        T& operator[](unsigned int index);
        // const
        const T& operator[](unsigned int index) const;

        // getter for the size
        unsigned int getSize() const;

        class OutOfBoundsException : public std::exception
        {
            public:
            // overriding std::exception::what()
                virtual const char* what() const throw();
        };
    private:
        T* array;
        int size;
};

#endif