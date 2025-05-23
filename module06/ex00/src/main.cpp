#include "../inc/ScalarConverter.hpp"

// argument must be passed as a string rapresentation of a literal
int main()
{
	// convert('a');
	ScalarConverter::convert("a");
	std::cout << "----------------------" << std::endl;
	ScalarConverter::convert("2");
	std::cout << "----------------------" << std::endl;
	ScalarConverter::convert("-2");
	std::cout << "----------------------" << std::endl;
	ScalarConverter::convert("22");
	std::cout << "----------------------" << std::endl;
	ScalarConverter::convert("22.09");
	std::cout << "----------------------" << std::endl;
	ScalarConverter::convert("22.09f");
	return 0;
}