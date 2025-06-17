#include "../inc/Span.hpp"
#include <string>
#include <cassert>
#include <cstring>
#include <iostream>
#include <vector>
// #include "../src/Span.cpp"

// shortest & longest span will be the biggest
// and smallest distance between 2 numbers
// inside the container

template<typename Iterator>
void	addRange(Iterator begin, Iterator end);

int main()
{
    Span sp = Span(5);

    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

    // Optional: test with 10,000 numbers
    Span bigSpan(10000);

	// manual numbers adding
    // for (int i = 0; i < 10000; ++i)
    //     bigSpan.addNumber(i);

	std::vector<int> range;
	range.push_back(99);
	range.push_back(300);
	range.push_back(18);
	range.push_back(400);
	// range adding
	// the addRange accept every container being done with templates
	bigSpan.addRange(range.begin(), range.end());

	// testing span size with public numbers parameter
	// std::cout << bigSpan.numbers.size() << std::endl;

    std::cout << "Big Shortest Span: " << bigSpan.shortestSpan() << std::endl;
    std::cout << "Big Longest Span: " << bigSpan.longestSpan() << std::endl;

    return 0;
}