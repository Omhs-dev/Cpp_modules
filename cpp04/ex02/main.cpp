#include "includes/AAnimal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
#include "includes/WrongAnimal.hpp"
#include "includes/WrongCat.hpp"

// #include "AAnimal.hpp"
// #include "Dog.hpp"
// #include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"
// int main() {
//     const int numAnimals = 6;
//     AAnimal *animals[numAnimals];

//     // Fill the array with half Dog and half Cat objects
//     for (int i = 0; i < numAnimals; ++i) {
//         if (i < numAnimals / 2) {
//             animals[i] = new Dog();
//         } else {
//             animals[i] = new Cat();
//         }
//     }

//     // Loop over the array and delete each animal
//     for (int i = 0; i < numAnimals; ++i) {
//         delete animals[i];
//     }

//     return 0;
// }


int main(void) 
{
    // Abstract class pointers
    std::cout << "------------------------------------------------" << std::endl;
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    const WrongAnimal* WrongAnim = new WrongAnimal();
    const WrongAnimal* WrongCt = new WrongCat();
    std::cout<<"Abstract class :" <<std::endl;
    std::cout << "------------------------------------------------" << std::endl;

    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 

    j->makeSound();
    std::cout << "Dog: " << j->getType() << std::endl;
    i->makeSound();
    std::cout << "Cat: " << i->getType() << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    
    std::cout<<"non abstract class :" <<std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    WrongAnim->makeSound();
    std::cout << "Type of wrong animal: " << WrongAnim->getType() << std::endl;
    WrongCt->makeSound();
    std::cout << "Type of wrong cat: " << WrongCt->getType() << std::endl;
    std::cout << "------------------------------------------------" << std::endl;
    delete WrongCt;
    delete WrongAnim;
    delete i;
    delete j;
    std::cout << "------------------------------------------------" << std::endl;
    return 0;
}
