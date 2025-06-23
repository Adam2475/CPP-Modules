#include "../inc/PmergeMe.hpp"
// c++ 11
// #include <array>

// Forward declarations
// template <typename T>
// void printContainer(T& container);

// Ford-Johnson algorythm
// this is a hybrid of merge-sort and insertion sort that:
// - pairs elements and sorts pairs recursively
// - inserts the smaller elements into the sorted list using
//      binary insertion.

// template <typename T>
// void printContainer(const T& container) {
//     std::cout << "identified type: unknown" << std::endl;
//     for (size_t i = 0; i < container.size(); ++i)
//         std::cout << container[i] << (i + 1 < container.size() ? " " : "\n");
// }

bool isPositiveNumber(const char* str)
{
    for(size_t i = 0; i < strlen(str); i++)
    {
        if (!isdigit(static_cast<int>(str[i])))
        {
            return false;
        }
    }
    return true;
}

bool isValidInt(char **av, int ac)
{
    for (int i = 1; i < ac; ++i)
    { 
        long val = atol(av[i]);

        if (val > INT_MAX || val < 0)
            return false;
        // std::cout << INT_MAX << std::endl;
    }
    return true;
}

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "wrong number of arguments!" << std::endl;
        return 1;
    }
    for(int i = 1; i < ac; ++i)
    {
        if (!isPositiveNumber(av[i]))
        {
            std::cerr << "unrecognized symbol in the array!" << std::endl;
            return 1;
        }   
    }
    if (!isValidInt(av, ac))
    {
        std::cerr << "number not a valid integer!" << std::endl;
        return 1;
    }
    PmergeMe holder = PmergeMe(av, ac);
    printContainer(holder.vec);
    holder.sortVector(holder.vec);
    printContainer(holder.dec);

    // the container should be sorted
    printContainer(holder.vec);

    // std::vector<int> vec;
    // fillContainer(vec, av[1]);
    // dec = fillDeque(av[1]);
    // printContainer(vec);
    return 0;
}