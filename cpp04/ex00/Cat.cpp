#include "includes/Cat.hpp"
#include <iostream>

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructed" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructed" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat : Meow!" << std::endl;
}
