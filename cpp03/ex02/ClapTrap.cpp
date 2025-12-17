/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 04:19:50 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 15:44:02 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) 
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destroyed!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap &cpy ) {
	this->_name = cpy._name;
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
}

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if ( amount >= _hitPoints  || _hitPoints == 0) {
        std::cout << "ClapTrap " << _name << " is already destroyed " << std::endl;
	}
        // _hitPoints -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_hitPoints > 0) {
        _hitPoints += amount;
        std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hit points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " is already destroyed" << std::endl;
    }
}
