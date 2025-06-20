#include "../inc/BitcoinExchange.hpp"

// CSV (comma separated values)
// a plain text file used to store tabular data

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "wrong number of arguments!" << std::endl;
        return 1;
    }
    try
    {
        Converter data(av[1]);
    }
    catch(std::exception &e)
    {
        std::cerr << "exception catched: " << e.what() << std::endl;
    }
    return 0;
}