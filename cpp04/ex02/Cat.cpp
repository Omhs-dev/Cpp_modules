#include "Cat.hpp"
#include <iostream>

Cat::Cat() : AAnimal(), brain(new Brain()) {
    std::cout << "[Cat] default constructor has been called" << std::endl;
}

Cat::Cat(const Cat &src) : AAnimal(src), brain(new Brain()) {
    std::cout << "[Cat] copy constructor has been called" << std::endl;
}

Cat::~Cat() {
    delete brain;
    std::cout << "[Cat] destructor has been called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Meow! 🐈" << std::endl;
}
