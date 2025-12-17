#include "RPN.hpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << argv[0] << " Invalid argument" << std::endl;
        return (1);
    }
	
    RPN rpn;
	if (!rpn.validExpression(argv[1]))
	{
        std::cerr << "Invalid Expression" << std::endl;
        return (1);
    }
    try
    {
        int result = rpn.evaluate(argv[1]);
        std::cout << result << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }

    return (0);
}
