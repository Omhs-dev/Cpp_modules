#include "./includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
    std::cout << "\tConstructing default WrongAnimal..." << std::endl;
    std::cout << "\tDefault WrongAnimal constructed!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "\tDestroying WrongAnimal..." << std::endl;
    std::cout << "\tWrongAnimal destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "\tConstructing copy WrongAnimal..." << std::endl;
    std::cout << "\tCopy WrongAnimal constructed!" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "\tAssigning WrongAnimal operator..." << std::endl;
    std::cout << "\tWrongAnimal operator assigned!" << std::endl;
    if (this == &src)
        return (*this);
    _type = src._type;
    return (*this);
}

std::string WrongAnimal::getType() const {return _type;}

void WrongAnimal::makeSound() const
{
    std::cout << "\tThis animal makes a sound!" << std::endl;
}
