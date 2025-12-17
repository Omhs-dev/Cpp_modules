#include "includes/WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructed" << std::endl;
}

void WrongCat::makeSound() const {
    std::cout << "WrongCat sound" << std::endl;
}
