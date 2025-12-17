/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:22:33 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 00:46:37 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie(void);
		~Zombie();
		Zombie(std::string name);
		void name_set(std::string name);
		void announce(void);
		
};

Zombie* zombieHorde(int N, std::string name);
// Zombie *newZombie(std::string name);
// void randomChump(std::string name);

#endif