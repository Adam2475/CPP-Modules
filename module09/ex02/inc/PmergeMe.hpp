#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
// #include <chrono>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <climits>

class PmergeMe {
    public:
        PmergeMe(char **av, int ac);
        ~PmergeMe();
        PmergeMe(const PmergeMe &src);
        PmergeMe &operator=(const PmergeMe &ptref);
        /////////////////////////////////////////////
        void fillContainer(char **av, int ac);
        static void sortVector(std::vector<int>& vec);
        static void sortDeque(std::deque<int>& deq);
        //////////////////////////////////////////////
        std::vector<int> vec;
        std::deque<int> dec;
    private:
        PmergeMe();
        //////////////////////////////////////////////

};

/////////////////////////////
// Printing Overload
/////////////////////////////

template <typename T>
void printContainer(const T& container)
{
    std::cout << "identified type: unknown" << std::endl;
    for (size_t i = 0; i < container.size(); ++i)
        std::cout << container[i] << (i + 1 < container.size() ? " " : "\n");
}

inline void printContainer(const std::vector<int>& container)
{
    std::cout << "identified type: vector" << std::endl;
    for (size_t i = 0; i < container.size(); ++i)
        std::cout << container[i] << (i + 1 < container.size() ? " " : "\n");
}

inline void printContainer(const std::deque<int>& container)
{
    std::cout << "identified type: deque" << std::endl;
    for (size_t i = 0; i < container.size(); ++i)
        std::cout << container[i] << (i + 1 < container.size() ? " " : "\n");
}

#endif