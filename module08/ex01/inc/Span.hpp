#ifndef SPAN_HPP
# define SPAN_HPP

#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <limits>
// #include <climits>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <unistd.h>

// Span class definition
// 	- can hold N integers
//  - must find biggest range in array
//  - must find smallest range in array
class Span {
	public:
		// Canonical form constructors
		Span();
		// Parameterized constructor
		Span(unsigned int N);
		Span(Span const &src);
		~Span();
		Span &	operator=(Span const &rSym);

		// Add a single number to the Span
		void	addNumber(int n);

		// Add a range of numbers to the Span
		// the linker don't find template functions if not
		// defined in the hpp
		template<typename Iterator>
		void	addRange(Iterator begin, Iterator end)
		{
			if (this->numbers.size() + std::distance(begin, end) > this->maxSize)
			{
				throw std::overflow_error("Adding range exeeds capacity!");
			}
			this->numbers.insert(this->numbers.end(), begin, end);
		}

		int		shortestSpan();
		int		longestSpan() const;

	private:
		unsigned int		maxSize;
		std::vector<int>	numbers;
};

#endif