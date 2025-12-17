#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

/*my class*/
class WrongCat : public WrongAnimal
{
public:
    /*default constructor*/
    WrongCat();
    /*public method functions*/
    void makeSound() const;
};

#endif
