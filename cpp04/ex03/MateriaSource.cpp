/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:59:54 by ohamadou          #+#    #+#             */
/*   Updated: 2024/06/08 23:31:17 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; ++i)
        _materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; ++i)
        _materias[i] = copy._materias[i] ? copy._materias[i]->clone() : nullptr;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if (this != &other) {
        for (int i = 0; i < 4; ++i) {
            delete _materias[i];
            _materias[i] = other._materias[i] ? other._materias[i]->clone() : nullptr;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; ++i) {
        delete _materias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i) {
        if (!_materias[i]) {
            _materias[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for (int i = 0; i < 4; ++i) {
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }
    return nullptr;
}
