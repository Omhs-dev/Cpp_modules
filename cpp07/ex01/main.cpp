#include <cstdlib>
#include <iostream>
#include <string>
#include "iter.hpp"

int main(void)
{
	int i_array[] = {1, 2, 3};

	std::cout << "Array: " << std::endl;
	::iter(i_array, 3, &::printElement<int>);
	
	// ::iter(i_array, 3, &::plusOne<int>);
	
	// std::cout << "After +1" << std::endl;
	// ::iter(i_array, 3, &::printElement<int>);
	
	return (0);
}
