/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:03:43 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 00:49:39 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : fixedval(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &ref) {
	std::cout << "Copy constructor called\n";
	int	temp = ref.getRawBits();
	setRawBits(temp);
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(ref.getRawBits());
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
};

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixedval);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedval = raw;
}