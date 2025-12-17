#include "./includes/Animal.hpp"
#include <iostream>

Animal::Animal() : _type("Animal")
{
    std::cout << "\tConstructing default Animal..." << std::endl;
    std::cout << "\tDefault Animal constructed!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "\tDestroying Animal..." << std::endl;
    std::cout << "\tAnimal destroyed!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "\tConstructing copy Animal..." << std::endl;
    std::cout << "\tCopy Animal constructed!" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &src)
{
    std::cout << "\tAssigning Animal operator..." << std::endl;
    std::cout << "\tAnimal operator assigned!" << std::endl;
    if (this == &src)
        return (*this);
    _type = src._type;
    return (*this);
}

std::string Animal::getType() const {return _type;}

void Animal::makeSound() const
{
    std::cout << "|This animal makes a sound!|" << std::endl;
}
