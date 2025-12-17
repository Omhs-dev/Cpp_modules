/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:11:26 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 15:32:48 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    std::cout << "FragTrap " << name << " created!" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << _name << " destroyed!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	if (this->_energyPoints == 0) {
        std::cout << "FragTrap "<< _name << " is out of energy points!" << std::endl;;
        return;
    }
	std::cout << "FragTrap " << this->_name << " wants a High Fives!" << std::endl;;
    this->_energyPoints -= 1;
}
