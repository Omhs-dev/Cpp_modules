/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:56:02 by ohamadou          #+#    #+#             */
/*   Updated: 2024/06/08 23:30:21 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.hpp"
#include "includes/ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout<<"Constructing default Ice"<<std::endl;
}

Ice::Ice(const Ice &ref) : AMateria(ref)
{
	*this = ref;
	std::cout<<"Copy constructor for Ice called"<<std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}

AMateria *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout<<"Destructing ~Ice"<<std::endl;
}
