#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <algorithm>
#include <iterator>

template <typename Container>
class PmergeMe
{
	public:
	    void sort(Container& container);
	private:
	    void mergeInsertSort(typename Container::iterator start, typename Container::iterator end);
	    void merge(typename Container::iterator start, typename Container::iterator mid, typename Container::iterator end);
};

template <typename Container>
void PmergeMe<Container>::sort(Container& container)
{
    mergeInsertSort(container.begin(), container.end());
}

template <typename Container>
void PmergeMe<Container>::mergeInsertSort(typename Container::iterator start, typename Container::iterator end)
{
    if (std::distance(start, end) > 1)
    {
        typename Container::iterator mid = start;
        std::advance(mid, std::distance(start, end) / 2);

        mergeInsertSort(start, mid);
        mergeInsertSort(mid, end);

        merge(start, mid, end);
    }
}

template <typename Container>
void PmergeMe<Container>::merge(typename Container::iterator start, typename Container::iterator mid, typename Container::iterator end)
{
    Container left(start, mid);
    Container right(mid, end);

    typename Container::iterator it = start;
    typename Container::iterator leftIt = left.begin();
    typename Container::iterator rightIt = right.begin();

	//take the smallest element between the left side and the right side
    while (leftIt != left.end() && rightIt != right.end())
    {
        if (*leftIt < *rightIt)
            *it++ = *leftIt++;
        else
            *it++ = *rightIt++;
    }

    while (leftIt != left.end())
    {
        *it++ = *leftIt++;
    }

    while (rightIt != right.end())
    {
        *it++ = *rightIt++;
    }
}

#endif
