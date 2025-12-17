#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>

class RPN
{
	private:
	    std::stack<int> stack;
	    bool isOperator(char c);
	    int performOperation(char op, int a, int b);

	public:
	    RPN();
	    ~RPN();
	    bool validExpression(const std::string &str);
	    int evaluate(const std::string& expression);
};

#endif
