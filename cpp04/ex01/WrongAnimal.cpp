#include "./includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "Constructing default WrongAnimal..." << std::endl;
    std::cout << "Default WrongAnimal constructed!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destroying WrongAnimal..." << std::endl;
    std::cout << "WrongAnimal destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Constructing copy WrongAnimal..." << std::endl;
    std::cout << "Copy WrongAnimal constructed!" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "Assigning WrongAnimal operator..." << std::endl;
    std::cout << "WrongAnimal operator assigned!" << std::endl;
    if (this == &src)
        return (*this);
    _type = src._type;
    return (*this);
}

std::string WrongAnimal::getType() const {return _type;}

void WrongAnimal::makeSound() const
{
    std::cout << "|\tThis animal makes a sound!|" << std::endl;
}
