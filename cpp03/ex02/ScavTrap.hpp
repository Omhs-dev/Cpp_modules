/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 05:28:24 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 13:39:50 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #ifndef SCAVTRAP_HPP
// #define SCAVTRAP_HPP

// #include "ClapTrap.hpp"

// class ScavTrap : public ClapTrap {
// 	private:
// 		ScavTrap();
// public:
//     ScavTrap(const std::string name);
//     // ScavTrap(ScavTrap &cpy);
//     ~ScavTrap();

//     void attack(const std::string& target);
//     void guardGate();
// };

// #endif // SCAVTRAP_HPP

// ScavTrap.hpp
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap(const std::string& name);
    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};

#endif // SCAVTRAP_HPP
