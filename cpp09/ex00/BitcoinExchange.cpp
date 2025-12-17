#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string& dbFile)
{
    loadDatabase(dbFile);
}

void BitcoinExchange::loadDatabase(const std::string& dbFile)
{
    std::ifstream file(dbFile.c_str());

    if (!file.is_open()) {
        std::cerr << "Error: could not open database file." << std::endl;
        return;
    }
    
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream ss(line);
        std::string date;
        float rate;
        if (std::getline(ss, date, ','))
        {
            ss >> rate;
            date.erase(date.find_last_not_of(" \t") + 1);
            exchangeRates[date] = rate;
        }
    }
}

std::string BitcoinExchange::findClosestDate(const std::string& date)
{
    std::map<std::string, float>::const_iterator it = exchangeRates.lower_bound(date);
    if (it == exchangeRates.begin())
        return (it->first);
    if (it == exchangeRates.end() || it->first != date)
        --it;
    return (it->first);
}

static bool isLeapYear(int year)
{
	return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool BitcoinExchange::isValidDate(const std::string& date)
{
    if (date.size() != 10 || date[4] != '-' || date[7] != '-')
        return (false);

    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());

    if ((year < 2009 || year > 2022) ||
        (month < 1 || month > 12) ||
        (day < 1 || day > 31))
            return (false);
    
    // Check for invalid date formats
    if ((month == 4 || month == 6 ||
        month == 9 || month == 11) && day > 30)
            return (false);

    if (month == 2)
    {
        bool isLeap = isLeapYear(year);
        if (day > 29 || (day == 29 && !isLeap))
            return (false);
    }
    return (true);
}

bool BitcoinExchange::isValidValue(const std::string& value)
{
    std::istringstream ss(value);
    float val;
    ss >> val;
    return !ss.fail() && ss.eof() && val >= 0 && val <= 1000;
}

void BitcoinExchange::processInputFile(const std::string& inputFile)
{
    std::ifstream file(inputFile.c_str());

    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }
    
    if (file.peek() == std::ifstream::traits_type::eof())
    {
        std::cout << "Error: file is empty" << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream ss(line);
        std::string date, value;
        if (std::getline(ss, date, '|') && std::getline(ss, value))
        {
            date.erase(date.find_last_not_of(" \t") + 1);
            value.erase(0, value.find_first_not_of(" \t"));
            if (!isValidDate(date))
            {
                std::cerr << "Error: invalid date: '" << date << "'" << std::endl;
                continue;
            }
            if (!isValidValue(value))
            {
                float val = std::atof(value.c_str());
                if (val < 0)
                    std::cerr << "Error: not a positive number." << std::endl;
                else
                    std::cerr << "Error: too large a number." << std::endl;
                continue;
            }
            float rate = exchangeRates.at(findClosestDate(date));
            float amount = std::atof(value.c_str());
            float result = rate * amount;
            std::cout << date << " => " << amount << " = " << result << std::endl;
        }
        else
            std::cerr << "Error: bad input format => " << date << std::endl;
    }
}
