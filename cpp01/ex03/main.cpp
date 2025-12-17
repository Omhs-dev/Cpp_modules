/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:37:20 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 03:01:56 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main(void) {
	{
	    Weapon club = Weapon("crude spiked club");
	    HumanA bob("Bob", club);
	    bob.attack();
		club.setType("some other type of club");
	    bob.attack();
	}
	{
	    Weapon club = Weapon("crude spiked club");
	    HumanB jim("Jim");
	    jim.setWeapon(club);
	    jim.attack();
		club.setType("some other type of club");
	    jim.attack();
	}

    return 0;
}

