#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
#include <limits.h>
#include <float.h>

#include <stdio.h>
// #include <stdlib.h>
#include <unistd.h>

// aliases are a c++ 11 extension
// using str = std::string;

enum type { CHAR, INT, FLOAT, DOUBLE, PSEUDO_LITERAL, INVALID };

class ScalarConverter
{
	// put constructor in private to not be instantiable
	private:
		// Canonical class elements
		ScalarConverter();
		ScalarConverter(const ScalarConverter &src);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& ref);
	public:
		// public methods
		static void convert(const std::string literal);	
};

#endif