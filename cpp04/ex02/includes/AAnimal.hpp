#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

/*my class*/
class AAnimal
{
    /*protected variable*/
protected:
    std::string _type;

    /*private constructor to prevent instantiation*/
    AAnimal();

public:
    virtual ~AAnimal();

    AAnimal(const AAnimal &copy);
    AAnimal &operator=(const AAnimal &src);
    std::string getType() const;
    virtual void makeSound() const = 0;
};

#endif
