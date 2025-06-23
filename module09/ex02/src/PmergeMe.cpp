#include "../inc/PmergeMe.hpp"

// Helper: binary insert an element into sorted portion
static void binaryInsert(std::vector<int>& vec, int value, int start, int end)
{
    int left = start;
    int right = end;

    while (left < right)
    {
        int mid = (left + right) / 2;
        if (vec[mid] < value)
            left = mid + 1;
        else
            right = mid;
    }
    // Insert value at position left by shifting elements
    vec.insert(vec.begin() + left, value);
}

// Recursive Ford-Johnson implementation (simplified)
static void fordJohnsonSort(std::vector<int>& vec, int start, int end)
{
    int n = end - start;
    if (n <= 1)
        return;
    if (n == 2)
    {
        if (vec[start] > vec[start + 1])
            std::swap(vec[start], vec[start + 1]);
        return;
    }

    // Step 1: pair elements and sort pairs
    std::vector<int> smaller;
    std::vector<int> larger;

    for (int i = start; i + 1 < end; i += 2)
    {
        if (vec[i] < vec[i + 1])
        {
            smaller.push_back(vec[i]);
            larger.push_back(vec[i + 1]);
        }
        else
        {
            smaller.push_back(vec[i + 1]);
            larger.push_back(vec[i]);
        }
    }
    if ((n % 2) != 0)
        smaller.push_back(vec[end - 1]);  // If odd, add last element to smaller

    // Step 2: recursively sort smaller elements
    fordJohnsonSort(smaller, 0, smaller.size());

    // Step 3: merge smaller elements and insert larger ones using binary insertion
    vec.erase(vec.begin() + start, vec.begin() + end);
    vec.insert(vec.begin() + start, smaller.begin(), smaller.end());

    for (size_t i = 0; i < larger.size(); ++i)
    {
        binaryInsert(vec, larger[i], start, start + smaller.size() + i);
    }
}

void PmergeMe::sortVector(std::vector<int>& vec)
{
    fordJohnsonSort(vec, 0, vec.size());
}

////////////////////////////////////////////////////////

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
        this->dec.push_back(value);
        // std::cout << value << std::endl;
    }
}