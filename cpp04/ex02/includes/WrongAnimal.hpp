#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

/*my class*/
class WrongAnimal
{
    /*protected variable*/
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &src);
    std::string getType() const;
    virtual void makeSound() const;
};

#endif
