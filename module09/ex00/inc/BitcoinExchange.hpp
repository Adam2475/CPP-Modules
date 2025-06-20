#include <iostream>
#include <string>
#include <iomanip>
#include <map>
// for file manipulation
#include <fstream>
#include <sstream>
#include <exception>

class Converter
{

    private:
        std::map<std::string, float> exchangeRates;
        Converter();
        Converter(const Converter &src);
        Converter operator=(const Converter &ptref);
    public:
        // parameterized constructor
        Converter(char *filename);
        ~Converter();

        // public methods
        int parser(char *filename);
        int parseInput(char *filename);

        class ParserException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        void exchangeRatesSetter(const std::string date, const float rate);
};