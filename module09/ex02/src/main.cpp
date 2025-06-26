#include "../inc/PmergeMe.hpp"
#include <sys/time.h>
#include <time.h>

// Ford-Johnson algorythm
// this is a hybrid of merge-sort and insertion sort that:
// - pairs elements and sorts pairs recursively
// - inserts the smaller elements into the sorted list using
//      binary insertion.

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
    std::cout << "not sorted: " << std::endl;
    std::cout << "--------------------" << std::endl;
    printContainer(holder.vec);
    printContainer(holder.dec);
    std::cout << "sorted: " << std::endl;
    std::cout << "--------------------" << std::endl;

    std::clock_t startVec, endVec, startDeq, endDeq;

    // Sorting vector
    startVec = clock();
    holder.sortVector(holder.vec);
    endVec = clock();

    // Sorting deque
    startDeq = clock();
    holder.sortDeque(holder.dec);
    endDeq = clock();

    double vecTime = ((double) (endVec - startVec)) / CLOCKS_PER_SEC * 1000;
    double deqTime = ((double) (endDeq - startDeq)) / CLOCKS_PER_SEC * 1000;

    // the container should be sorted
    printContainer(holder.dec);
    printContainer(holder.vec);

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "Time to process a range of " << holder.vec.size() << " elements with std::vector : " << vecTime << " ms" << std::endl;
    std::cout << "Time to process a range of " << holder.dec.size() << " elements with std::deque  : " << deqTime << " ms" << std::endl;


    // std::vector<int> vec;
    // fillContainer(vec, av[1]);
    // dec = fillDeque(av[1]);
    // printContainer(vec);
    return 0;
}