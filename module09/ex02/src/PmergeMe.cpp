#include "../inc/PmergeMe.hpp"

void PmergeMe::sortVector(std::vector<int>& vec)
{
    fordJohnsonSort(vec, 0, vec.size());
}

void PmergeMe::sortDeque(std::deque<int>& deq)
{
    fordJohnsonSort(deq, 0, deq.size());
}

//////////////////
// Constructors
//////////////////

PmergeMe::PmergeMe(char **av, int ac)
{
    fillContainer(av, ac);
}

PmergeMe::~PmergeMe() {}

void PmergeMe::fillContainer(char **av, int ac)
{
    for (int i = 1; i < ac; ++i)
    {
        long int value;
        value = atoi(av[i]);
        this->vec.push_back(value);
        this->dec.push_back(value);
    }
}