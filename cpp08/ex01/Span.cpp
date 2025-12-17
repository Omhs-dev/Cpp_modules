#include "Span.hpp"

Span::Span(unsigned int N) : max_size(N) {}

Span::Span(const Span& other)
	: max_size(other.max_size), numbers(other.numbers) {}

Span& Span::operator=(const Span& other)
{
    if (this != &other) {
        max_size = other.max_size;
        numbers = other.numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (numbers.size() >= max_size)
        throw SpanFullException();
    
    numbers.push_back(number);
}

int Span::shortestSpan() const
{
    if (numbers.size() < 2)
        throw NotEnoughElementsException();

    std::vector<int> sorted(numbers);
    std::sort(sorted.begin(), sorted.end());
    int shortest = sorted[1] - sorted[0];
    for (std::size_t i = 1; i < sorted.size() - 1; ++i)
    {
        int span = sorted[i + 1] - sorted[i];
        if (span < shortest)
            shortest = span;
    }
    return (shortest);
}

int Span::longestSpan() const
{
    if (numbers.size() < 2)
        throw NotEnoughElementsException();
    int min = *std::min_element(numbers.begin(), numbers.end());
    int max = *std::max_element(numbers.begin(), numbers.end());
    return (max - min);
}

const char* Span::SpanFullException::what() const throw()
{
    return ("Span is full Or empty");
}

const char* Span::NotEnoughElementsException::what() const throw()
{
    return ("Not enough elements to find a span");
}
