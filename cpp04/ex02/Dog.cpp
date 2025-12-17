#include "Dog.hpp"
#include <iostream>

Dog::Dog() : AAnimal(), brain(new Brain()) {
    std::cout << "[Dog] default constructor has been called" << std::endl;
}

Dog::Dog(const Dog &src) : AAnimal(src), brain(new Brain()) {
    std::cout << "[Dog] copy constructor has been called" << std::endl;
}

Dog::~Dog() {
    delete brain;
    std::cout << "[Dog] destructor has been called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Woof! 🐕" << std::endl;
}
