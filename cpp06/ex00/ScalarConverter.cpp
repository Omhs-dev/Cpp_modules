#include "ScalarConverter.hpp"

enum literalType 
{
	_error,
	_char,
	_int,
	_float,
	_double,
};

static literalType getType(std::string const &literal)
{
    if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
        return (_char);
	try {
        std::stoi(literal);
        return _int;
    } catch (std::invalid_argument &) {}
    catch (std::out_of_range &) {}
    
    try {
        std::stof(literal);
        if (literal.find('f') != std::string::npos)
            return _float;
    } catch (std::invalid_argument &) {}
    catch (std::out_of_range &) {}

    try {
        std::stod(literal);
        return _double;
    } catch (std::invalid_argument &) {}
    catch (std::out_of_range &) {}

    return _error;
}

static void printChar(const std::string &literal, literalType type)
{
    int intValue;
    try {
        intValue = std::stoi(literal);
    } catch (...) {
        intValue = -1;
    }

    if (type == _char)
        std::cout << "char: '" << literal[0] << "'" << std::endl;
    else if (type == _int && intValue >= 0 && intValue <= 127 && std::isprint(intValue))
        std::cout << "char: '" << static_cast<char>(intValue) << "'" << std::endl;
    else if (type == _int)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
}

static void printInt(const std::string &literal, literalType type)
{
    int intValue;
    try {
        intValue = std::stoi(literal);
    } catch (...) {
        intValue = -1;
    }

    if (type == _char)
        std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
    else if (type == _int)
        std::cout << "int: " << intValue << std::endl;
    else
        std::cout << "int: impossible" << std::endl;
}

static void printFloat(const std::string &literal, literalType type)
{
    char charValue = literal[0];
    int intValue;
    float floatValue;
    try {
        intValue = std::stoi(literal);
        floatValue = std::stof(literal);
    } catch (...) {
        intValue = -1;
        floatValue = std::numeric_limits<float>::quiet_NaN();
    }

    if (type == _char)
        std::cout << "float: " << static_cast<float>(charValue) << ".0f" << std::endl;
    else if (type == _int)
        std::cout << "float: " << static_cast<float>(intValue) << ".0f" << std::endl;
    else if (type == _float || type == _double)
        std::cout << "float: " << floatValue << "f" << std::endl;
    else
        std::cout << "float: impossible" << std::endl;
}

static void printDouble(const std::string &literal, literalType type)
{
    char charValue = literal[0];
    int intValue;
    double doubleValue;
    try {
        intValue = std::stoi(literal);
        doubleValue = std::stod(literal);
    } catch (...) {
        intValue = -1;
        doubleValue = std::numeric_limits<double>::quiet_NaN();
    }

    if (type == _char)
        std::cout << "double: " << static_cast<double>(charValue) << ".0" << std::endl;
    else if (type == _int)
        std::cout << "double: " << static_cast<double>(intValue) << ".0" << std::endl;
    else if (type == _float || type == _double)
        std::cout << "double: " << doubleValue << std::endl;
    else
        std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convert(const std::string& literal)
{
    literalType type = getType(literal);
    printChar(literal, type);
    printInt(literal, type);
    printFloat(literal, type);
    printDouble(literal, type);
}
