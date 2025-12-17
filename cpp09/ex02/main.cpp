#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <sstream>
#include <ctime>
#include "PmergeMe.hpp"

bool isValidPositiveInteger(const std::string& str)
{
    for (size_t i = 0; i < str.size(); ++i)
    {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}

int main(int argc, char** argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: No input provided" << std::endl;
        return 1;
    }

    std::vector<int> vec;
    std::list<int> lst;

    for (int i = 1; i < argc; ++i)
    {
        if (!isValidPositiveInteger(argv[i]))
        {
            std::cerr << "Error: Invalid input - " << argv[i] << std::endl;
            return 1;
        }
        int num = std::atoi(argv[i]);
        if (num < 0)
        {
            std::cerr << "Error: Negative number - " << argv[i] << std::endl;
            return 1;
        }
        vec.push_back(num);
        lst.push_back(num);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    clock_t start, end;

    start = clock();
    PmergeMe<std::vector<int> > vecSorter;
    vecSorter.sort(vec);
    end = clock();
    double vectorTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    start = clock();
    PmergeMe<std::list<int> > listSorter;
    listSorter.sort(lst);
    end = clock();
    double listTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;

    std::cout << "After: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << vectorTime << " s" << std::endl;
    std::cout << "Time to process a range of " << lst.size() << " elements with std::list: " << listTime << " s" << std::endl;

    return (0);
}
