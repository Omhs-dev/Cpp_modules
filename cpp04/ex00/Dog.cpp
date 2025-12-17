#include "./includes/Dog.hpp"
#include <iostream>

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog constructed" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructed" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog : Woof!" << std::endl;
}
