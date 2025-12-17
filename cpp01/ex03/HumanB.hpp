/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 01:36:57 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 02:26:53 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB {
private:
    std::string _name;
    Weapon *_weapon;

public:
    HumanB(std::string name);
    ~HumanB(void);
    void attack() const;
    void setWeapon(Weapon &weapon);
};

#endif
