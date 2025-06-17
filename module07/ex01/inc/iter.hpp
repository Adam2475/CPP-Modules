#ifndef ITER_HPP
# define ITER_HPP

// for size_t
#include <iostream>
#include <cstddef>

// for working with const and without
template <typename T, typename F>
void iter(T* array, size_t length, F function)
{
    for(size_t i = 0; i < length; ++i)
        function(array[i]);
}

#endif