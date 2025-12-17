#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    /*protected variable*/
	protected:
	    std::string _type;
	
	    /*public variable*/
	public:
	    /*default constructor*/
	    WrongAnimal();
	    /*copy constructor*/
	    WrongAnimal(const WrongAnimal &copy);
	    /*destructor*/
	    virtual ~WrongAnimal();
	    /*overload operator*/
	    WrongAnimal &operator=(const WrongAnimal &src);
	    /*public method functions (getter)*/
	    std::string getType() const;
	    /*public method functions*/
	    virtual void makeSound() const;
};

#endif
