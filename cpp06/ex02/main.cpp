#include <iostream>
#include "Functions.hpp"

int main(void)
{
    Base* base = generate();
    
    std::cout << "Identifying by pointer (*): ";
    identify(base);
    
    std::cout << "Identifying by reference (&): ";
    identify(*base);
    
    delete base;
    return (0);
}
