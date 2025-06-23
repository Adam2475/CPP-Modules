#include "../inc/PmergeMe.hpp"

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
        // i += log10(value);
        this->vec.push_back(value);
        // std::cout << value << std::endl;
    }
}