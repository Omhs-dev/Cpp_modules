#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

class BitcoinExchange
{
	private:
	    std::map<std::string, float> exchangeRates;
	    void loadDatabase(const std::string& dbFile);
	    std::string findClosestDate(const std::string& date);
	    bool isValidDate(const std::string& date);
	    bool isValidValue(const std::string& value);

	public:
	    BitcoinExchange(const std::string& dbFile);
	    void processInputFile(const std::string& inputFile);
};

#endif
