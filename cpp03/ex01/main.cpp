/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 04:20:35 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 16:15:57 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// int main(void)
// {
// 	ScavTrap MainChar("MainChar");
// 	ScavTrap Ennemy("Ennemy");
// 	std::cout << std::endl;
// 	MainChar.attack("Ennemy");
// 	Ennemy.takeDamage(5);
// 	std::cout << std::endl;
// 	MainChar.attack("Ennemy");
// 	Ennemy.takeDamage(1);
// 	std::cout << std::endl;
// 	MainChar.attack("Ennemy");
// 	Ennemy.takeDamage(1);
// 	std::cout << std::endl;
// 	Ennemy.beRepaired(7);
// 	std::cout << std::endl;
// 	MainChar.attack("Ennemy");
// 	Ennemy.takeDamage(10);
// 	std::cout << std::endl;
// 	MainChar.guardGate();
// 	Ennemy.guardGate();
// 	std::cout << std::endl;

// 	return 0;
// }

int main() {
	ScavTrap scavtrap("MainChar");
	ScavTrap scav (scavtrap);
	scavtrap.attack("Enemy");
	scavtrap.takeDamage(2);
	scavtrap.beRepaired(2);
	scavtrap.guardGate();

	return 0;
}
