#include "RPN.hpp"
#include <sstream>
#include <stdexcept>
#include <iostream>

RPN::RPN() {}

RPN::~RPN() {}

bool RPN::isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool RPN::validExpression(const std::string &str)
{
	return (str.find_first_not_of("0123456789+-/* ") == std::string::npos);
}

int RPN::performOperation(char op, int a, int b)
{
    switch (op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/': 
            if (b == 0)
                throw std::runtime_error("Error: Division by zero");
            return a / b;
        default: 
            throw std::runtime_error("Error: Invalid operator");
    }
}

int RPN::evaluate(const std::string& expression)
{
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token)
    {
        if (token.length() == 1 && isOperator(token[0]))
        {
            if (stack.size() < 2)
                throw std::runtime_error("Error: Invalid expression");
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            int result = performOperation(token[0], a, b);
            stack.push(result);
        }
        else
        {
            int number = std::atoi(token.c_str());
            stack.push(number);
        }
    }

    if (stack.size() != 1)
        throw std::runtime_error("Error: Invalid expression");

    return (stack.top());
}
