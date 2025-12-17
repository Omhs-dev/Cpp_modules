/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:37:20 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 01:05:53 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void) {
    int N = 5;
    Zombie* horde = zombieHorde(N, "HordeZombie");

    for (int i = 0; i < N; ++i)
    {
        std::cout << i << " ";
        horde[i].announce();
    }

    delete [] horde;
    return 0;
}
