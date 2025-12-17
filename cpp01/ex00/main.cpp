/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:37:20 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 00:15:05 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie_one;
	Zombie *zombie_two = newZombie("Him");

	zombie_one.announce();
	zombie_two->announce();
	randomChump("Foo");
	
	delete zombie_two;
	return 0;
}

// int main() {
//     // Create Zombie instances
//     Zombie zombie_one("Unnamed Zombie");
//     zombie_one.announce();
//     Zombie *zombie_two = newZombie("Him");
//     zombie_two->announce();
//     randomChump("Foo");

//     delete zombie_two;
//     return 0;
// }
