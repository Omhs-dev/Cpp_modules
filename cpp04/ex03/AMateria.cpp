/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:53:08 by ohamadou          #+#    #+#             */
/*   Updated: 2024/06/08 23:29:44 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.hpp"
#include "includes/ICharacter.hpp"

AMateria::AMateria(const std::string &type) : _type(type)
{
	std::cout<<"1 constructing default " << this->_type <<std::endl;
}

AMateria::AMateria(const AMateria &copy) : _type(copy._type){};

const std::string &AMateria::getType() const {
    return _type;
}

AMateria &AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        this->_type = other.getType();
    }
    return *this;
}

AMateria *AMateria::clone() const
{
	return (AMateria*)this;
}

void AMateria::use(ICharacter &target) {
    std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}

AMateria::~AMateria() {
	std::cout<<"Destructring ~AMateria"<<std::endl;
}
