/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:55:42 by ohamadou          #+#    #+#             */
/*   Updated: 2024/06/08 07:06:33 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Character.hpp"
#include <iostream>

Character::Character(const std::string &name) : _name(name)
{
	std::cout<<"constructing Character " << this->_name <<std::endl;
    for (int i = 0; i < 4; ++i)
        _inventory[i] = nullptr;
}

Character::Character(const Character &copy) : _name(copy._name)
{
	std::cout<<"constructing copy Character"<<std::endl;
    for (int i = 0; i < 4; ++i)
    {
        if (_inventory[i])
            delete _inventory[i];
        _inventory[i] = nullptr;
        if (copy._inventory[i])
            _inventory[i] = copy._inventory[i]->clone();
        else
            _inventory[i] = nullptr;
    }
}

Character &Character::operator=(const Character &other) {
    if (this != &other) {
        _name = other._name;
        for (int i = 0; i < 4; ++i) {
            if (_inventory[i]) {
                delete _inventory[i];
            }
            _inventory[i] = nullptr;
			if (other._inventory[i])
                _inventory[i] = other._inventory[i]->clone();
            else
                _inventory[i] = nullptr;
        }
    }
    return *this;
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i) {
        delete _inventory[i];
    }
    std::cout<<"Destructring ~Character"<<std::endl;
}

const std::string &Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!_inventory[i])
        {
            std::cout << "Character " <<Character::_name << " equipped with " << m->getType() << std::endl;
            _inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4) {
        _inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
    {
        _inventory[idx]->use(target);
    }
}
