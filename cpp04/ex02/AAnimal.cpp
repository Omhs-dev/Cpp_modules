#include "./includes/AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : _type("Animal")
{
    std::cout << "\tConstructing default Animal..." << std::endl;
    std::cout << "\tDefault Animal constructed!" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "\tDestroying Animal...\t" << std::endl;
    std::cout << "\tAnimal destroyed!\t" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    std::cout << "\tConstructing copy Animal..." << std::endl;
    std::cout << "\tCopy Animal constructed!" << std::endl;
    *this = copy;
}

AAnimal &AAnimal::operator=(const AAnimal &src)
{
    std::cout << "\tAssigning Animal operator..." << std::endl;
    std::cout << "\tAnimal operator assigned!" << std::endl;
    if (this == &src)
        return (*this);
    _type = src._type;
    return (*this);
}

std::string AAnimal::getType() const {return _type;}

void AAnimal::makeSound() const
{
    std::cout << "|\tThis animal makes a sound!|" << std::endl;
}
