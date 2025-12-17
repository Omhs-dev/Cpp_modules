/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:48:33 by ohamadou          #+#    #+#             */
/*   Updated: 2024/06/08 06:48:22 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <string>

class ICharacter; // Forward declaration

class AMateria {
protected:
    std::string _type;

public:
    AMateria(const std::string &type);
    AMateria(const AMateria &copy);
    AMateria &operator=(const AMateria &other);
    virtual ~AMateria();

    const std::string &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif // AMATERIA_HPP
