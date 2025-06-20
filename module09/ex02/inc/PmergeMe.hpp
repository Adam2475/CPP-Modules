#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <chrono>
#include <iomanip>
#include <cstdlib> // for std::exit

class PmergeMe {
    public:
        static void sortVector(std::vector<int>& vec);
        static void sortDeque(std::deque<int>& deq);
}

#endif