/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:36:09 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 02:41:30 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type){
	_type = type;
}

Weapon::~Weapon()
{
	return ;
}

const std::string& Weapon::getType(void)
{
    return _type;
}

void Weapon::setType(std::string type)
{
    _type = type;
}
