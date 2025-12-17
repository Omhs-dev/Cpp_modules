/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 04:20:35 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 16:16:37 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap clap("ClapTrap");
    clap.attack("Enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);
    return 0;
}
