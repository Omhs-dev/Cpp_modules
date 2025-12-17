/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:22:36 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 00:47:46 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name) : _name(name) {}

Zombie::~Zombie(void)
{
	std::cout << _name << " has been destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << " : BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void Zombie::name_set(std::string name)
{
    _name = name;
}