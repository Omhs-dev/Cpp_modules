#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

int main() {
    std::cout<<"------------------------------------------------" << std::endl;
    const int numAnimals = 5; // Total number of animals
    Animal *animals[numAnimals];

    // Fill the array with half Dog and half Cat objects
    for (int i = 0; i < numAnimals; ++i) {
        if (i < numAnimals / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }
    std::cout<<"------------------------------------------------" << std::endl;
		for (size_t in = 0; in < 5; in++)
        animals[in]->makeSound();
    std::cout<<"------------------------------------------------" << std::endl;
    // Loop over the array and delete each animal
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    return 0;
}
