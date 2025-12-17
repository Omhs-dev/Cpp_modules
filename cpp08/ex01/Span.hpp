#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <exception>
#include <algorithm>
#include <iterator>

class Span
{
	private:
		unsigned int max_size;
		std::vector<int> numbers;
	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		~Span();
	
		void addNumber(int number);
	
		// Template function definition inside the header
		template <typename InputIt>
		void addNumbers(InputIt begin, InputIt end)
		{
			if (static_cast<unsigned int>(std::distance(begin, end)) > max_size - numbers.size())
			{
				throw SpanFullException();
			}
			numbers.insert(numbers.end(), begin, end);
		}
		//span functions
		int shortestSpan() const;
		int longestSpan() const;

		class SpanFullException : public std::exception
		{
			const char* what() const throw();
		};

		class NotEnoughElementsException : public std::exception
		{
			const char* what() const throw();
		};
};

#endif
