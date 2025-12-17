#include <iostream>
#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal* w = new WrongCat(); // Using the wrong animal type

    std::cout << j->getType() << " Sound: ";
    j->makeSound();

    std::cout << i->getType() << " Sound: ";
    i->makeSound();

    std::cout << w->getType() << " Sound: ";
    w->makeSound();
	
    delete j;
    delete i;
    delete w;

    return 0;
}

// int main()
// {
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// return 0;
// }
