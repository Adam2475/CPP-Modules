#include "../inc/ScalarConverter.hpp"
// for atoi
#include <cstdlib>
#include <stdlib.h> 

static void convertChar(const std::string data)
{
	std::cout << "char: " << data[0] << std::endl;
	std::cout << "int: " << static_cast<int>(data[0]) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(data[0]) << "f" << std::endl; 
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(data[0]) << std::endl; 
}

static void convertInt(const std::string data)
{
	// c_str() = convert to a C type string
	int num = std::atoi(data.c_str());

	if (num < 0 || num > 127)
		std::cout << "char: impossible" << std::endl;
	else if (num < 32 || num == 127)
		std::cout << "char: non-displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(num);

	std::cout << "int: " << num << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(num) << "f" << std::endl; 
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(num) << std::endl; 
}

static void convertFloat(const std::string data)
{
	(void)data;
	std::cout << "hello float" << std::endl;
}

static void convertDouble(const std::string data)
{
	(void)data;
	std::cout << "hello double" << std::endl;
}

//////////////////////////////////////////////////////////////

static void handlePseudoLiteral(const std::string data)
{
	(void)data;
	std::cout << "hello from pseudo-literals" << std::endl;
}

static int parseInput(const std::string data)
{
	size_t i = 0;

	if (std::isprint(data[0]) && !std::isdigit(data[0]) && data.length() == 1)
		return CHAR;
	if (data[0] == '-' || data[0] == '+')
		i++;
	if (std::isdigit(data[i]))
	{
		bool dotFlag = false;
		bool fFlag = false;
		for (size_t j = i; j < data.size(); ++j)
		{
			if (data[j] == '.')
				dotFlag = true;
			if (data[j] == 'f')
				fFlag = true;
		}
		if (fFlag && dotFlag)
			return FLOAT;
		else if (dotFlag)
			return DOUBLE;
	}
	if (std::isdigit(data[i]))
	{
		while (i >= data.length())
			i++;
		return INT;
	}
	return 42;
}

void	ScalarConverter::convert(const std::string data)
{
	int type = parseInput(data);

	switch (type)
	{
		case CHAR:
			convertChar(data);
			break;
		case INT:
			convertInt(data);
			break;
		case FLOAT:
			convertFloat(data);
			break;
		case DOUBLE:
			convertDouble(data);
			break;
		case PSEUDO_LITERAL:
			handlePseudoLiteral(data);
			break;
		default:
			std::cout << "impossible" << std::endl;
	}
}
