/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:49:25 by ohamadou          #+#    #+#             */
/*   Updated: 2024/06/08 04:03:48 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
    Cure();
    Cure(const Cure &copy);
    Cure &operator=(const Cure &other);
    virtual ~Cure();

    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif // CURE_HPP
