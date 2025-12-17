/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:58:37 by ohamadou          #+#    #+#             */
/*   Updated: 2024/06/08 07:18:14 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cure.hpp"
#include "includes/ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout<<"Constructing Cure"<<std::endl;
}

Cure::Cure(const Cure &copy) : AMateria(copy) 
{
	*this = copy;
	std::cout<<"copy constructing Cure"<<std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other) {
        this->_type = other._type;
    }
    return *this;
}


AMateria *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout<<"Destructring ~Cure"<<std::endl;
}