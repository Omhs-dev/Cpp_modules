#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main(void)
{
    try {
        std::vector<int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        
        std::cout << "Vector: ";
        for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        std::vector<int>::iterator it = easyfind(vec, 20);
        std::cout << "Found " << *it << " in vector." << std::endl;
        
        it = easyfind(vec, 50);
        std::cout << "Found " << *it << " in vector." << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Value not found in vector." << std::endl;
    }
	
	std::cout << std::endl;
	
    try {
        std::list<int> lst;
        lst.push_back(23);
        lst.push_back(40);
        lst.push_back(52);
        
        std::cout << "List: ";
        for (std::list<int>::iterator it = lst.begin(); it != lst.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        std::list<int>::iterator it = easyfind(lst, 23);
        std::cout << "Found " << *it << " in list." << std::endl;
        
        it = easyfind(lst, 50);
        std::cout << "Found " << *it << " in list." << std::endl;
    } catch (std::exception& e) {
        std::cerr << "Value not found in list." << std::endl;
    }

    return (0);
}
