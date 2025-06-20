#include "../inc/BitcoinExchange.hpp"

int Converter::parser(char *filename)
{
    // trasform the string to a input stream
    std::ifstream file(filename);
    std::string line;
    bool header_skipped = false;
    if (!file)
        return 1;
    if (!file.is_open())
    {
        std::cout << "error opening the file!" << std::endl;
        return 1;
    }
    /**
    * @brief
    * get line reads characters from an input stream and places them into a string
    * 
    * @param
    *   input:  the stream to get data from
    *   str:    the string to put the data into
    *   delim:  the delimiter character
     */
    while (std::getline(file, line))
    {
        if (!header_skipped)
        {
            header_skipped = true;
            continue;
        }
        // implement input and output operations on string based streams
        // it stores an instance of std::basic_string and perform input
        // and output operations on it
        std::stringstream ss(line);
        std::string date;
        std::string rateStr;
        float rate;

        if (std::getline(ss, date, ',') && std::getline(ss, rateStr))
        {
            std::stringstream rateStream(rateStr);
            rateStream >> rate;
            Converter::exchangeRatesSetter(date, rate);
        }
    }

    // for (std::map<std::string, float>::iterator it = exchangeRates.begin(); it != exchangeRates.end(); ++it) {
    //     std::cout << it->first << " => " << it->second << std::endl;
    // }
    
    file.close();
    return 0;
}

int Converter::parseInput(char *filename)
{
    std::ifstream file(filename);
    std::string line;
    bool header_skipped = false;
    if (!file)
        return 1;
    if(!file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    while (std::getline(file, line))
    {
        if (!header_skipped)
        {
            header_skipped = true;
            continue;
        }

        std::string date, valueStr;
        std::stringstream ss(line);
        // float value;
        if (!(std::getline(ss, date, '|') && std::getline(ss, valueStr)))
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        //Trim whitespace
        date.erase(date.find_last_not_of(" \t") + 1);
        date.erase(0, date.find_first_not_of(" \t"));
        valueStr.erase(valueStr.find_last_not_of(" \t") + 1);
        valueStr.erase(0, valueStr.find_first_not_of(" \t"));

        // Validate date format
        if (date.size() != 10 || date[4] != '-' || date[7] != '-') {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }

        float value;
        std::stringstream valueStream(valueStr);
        if (!(valueStream >> value) || !valueStream.eof())
        {
            std::cerr << "Error: bad value => " << valueStr << std::endl;
            continue;
        }

        if (value < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }

        if (value > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }

        // Assume float value was parsed and validated
        std::map<std::string, float>::const_iterator it = this->exchangeRates.lower_bound(date);

        // If the exact date isn't found and the current key is greater, we go back one day
        if (it == this->exchangeRates.end() || it->first != date)
        {
            if (it == this->exchangeRates.begin()) {
                std::cerr << "Error: no earlier date available for " << date << std::endl;
                continue;
            }
            --it; // go to the closest earlier date
        }

        float exchangeRate = it->second;
        float result = value * exchangeRate;

        std::cout << date << " => " << value << " = " << result << std::endl;

        // std::cout << date << " => " << valueStr << std::endl;
    }
    return 0;
}

Converter::Converter(char *filename)
{
    if (parser((char *)"data.csv") > 0)
        throw ParserException();
    // std::cout << "ciao" << std::endl;
    if (parseInput(filename) > 0)
        throw ParserException();
    
}

Converter::~Converter()
{
    // std::cout << "default destructor called" << std::endl;
}

const char *Converter::ParserException::what() const throw()
{
    return ("Error while parsing the file!");
}

void Converter::exchangeRatesSetter(const std::string date, const float rate)
{
    this->exchangeRates[date] = rate;
}