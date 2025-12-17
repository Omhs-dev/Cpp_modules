/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:49:12 by ohamadou          #+#    #+#             */
/*   Updated: 2024/06/08 06:00:31 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

#include <iostream>

class Ice : public AMateria {
public:
    Ice();
    Ice(const Ice &ref);
    Ice &operator=(const Ice &other);
    virtual ~Ice();

    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif // ICE_HPP
