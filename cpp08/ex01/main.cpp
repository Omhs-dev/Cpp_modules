#include "Span.hpp"
#include <iostream>
#include <vector>
#include <cstdlib>

int main(void)
{
	{
		try {
			std::cout << "------ Empty ------" << std::endl;
			
			Span empty = Span(0);
			empty.addNumber(3);
			empty.addNumber(6);
			empty.addNumber(7);
			std::cout << empty.shortestSpan() << std::endl;
			std::cout << empty.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		};
	}
	{
		std::cout << "\n------ Regular ------" << std::endl;

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		try {
			std::cout << "------ Less than 2 ------" << std::endl;
			
			Span empty = Span(1);
			empty.addNumber(7);
			std::cout << empty.shortestSpan() << std::endl;
			std::cout << empty.longestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		};
	}

	return (0);
}
