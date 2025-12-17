#include "./includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
}

void WrongCat::makeSound() const
{
    std::cout << "\tMeow meow!" << std::endl;
}
