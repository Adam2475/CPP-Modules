#include "../inc/RPN.hpp"

// Ford-Johnson algorythm
// this is a hybrid of merge-sort and insertion sort that:
// - pairs elements and sorts pairs recursively
// - inserts the smaller elements into the sorted list using
//      binary insertion.

bool isPositiveNumber(const std::string& str)
{
    if (str.empty()) return false;
    for (char c : str)
        if (!isdigit(c)) return false;
    return true;
}

void printContainer(const std::vector<int>& vec)
{
    for (size_t i = 0; i < vec,size(); ++i)
        std::cout << vec[i] << (i + 1 < vec.size() ? " " : "\n");
}

int main()
{
    if (ac < 2)
    return 0;
}