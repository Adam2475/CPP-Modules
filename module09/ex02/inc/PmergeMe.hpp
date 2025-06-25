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
#include <ctime>

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

//////////////////////////////
// Sorting Template
//////////////////////////////

template <typename T>
void binaryInsert(T& container, int value, size_t start, size_t end)
{
    size_t left = start;
    size_t right = end;

    while (left < right)
    {
        size_t mid = (left + right) / 2;
        if (container[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    container.insert(container.begin() + left, value);
}

template <typename T>
void fordJohnsonSort(T& container, size_t start, size_t end)
{
    size_t n = end - start;
    if (n <= 1)
        return;
    if (n == 2)
    {
        if (container[start] > container[start + 1])
            std::swap(container[start], container[start + 1]);
        return;
    }

    T smaller, larger;

    for (size_t i = start; i + 1 < end; i += 2)
    {
        if (container[i] < container[i + 1])
        {
            smaller.push_back(container[i]);
            larger.push_back(container[i + 1]);
        }
        else
        {
            smaller.push_back(container[i + 1]);
            larger.push_back(container[i]);
        }
    }

    if (n % 2 != 0)
        smaller.push_back(container[end - 1]);

    fordJohnsonSort(smaller, 0, smaller.size());

    // Clear & rebuild container
    container.erase(container.begin() + start, container.begin() + end);
    container.insert(container.begin() + start, smaller.begin(), smaller.end());

    for (size_t i = 0; i < larger.size(); ++i)
    {
        binaryInsert(container, larger[i], start, start + smaller.size() + i);
    }
}

#endif