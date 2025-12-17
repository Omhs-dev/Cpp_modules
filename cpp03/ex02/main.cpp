/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 04:20:35 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 16:20:54 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// int main(void)
// {
// 	FragTrap MainC("MainC");
// 	FragTrap enemy("enemy");

// 	std::cout << std::endl;

// 	MainC.attack("enemy");
// 	enemy.takeDamage(30);

// 	std::cout << std::endl;

// 	MainC.attack("enemy");
// 	enemy.takeDamage(30);

// 	std::cout << std::endl;


// 	MainC.attack("enemy");
// 	enemy.takeDamage(30);

// 	std::cout << std::endl;

// 	MainC.attack("enemy");
// 	enemy.takeDamage(30);

// 	std::cout << std::endl;

// 	enemy.beRepaired(100);

// 	std::cout << std::endl;

// 	enemy.highFivesGuys();

// 	std::cout << std::endl;

// 	enemy.takeDamage(100);

// 	return EXIT_SUCCESS;
// }

int main() {
	FragTrap fragtrap("MainChar");
	fragtrap.attack("Enemy");
	fragtrap.takeDamage(2);
	fragtrap.beRepaired(2);
	fragtrap.highFivesGuys();

	return 0;
}
