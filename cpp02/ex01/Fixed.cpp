/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:03:43 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 18:57:42 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : fixedval(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int intValue) : fixedval(intValue * (1 << Fixed::bits))
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float floatValue) : fixedval( roundf(floatValue * (1 << Fixed::bits)) )
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &refcpy) {
	std::cout << "Copy constructor called\n";
	*this = refcpy;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	std::cout << "Copy assignment operator called\n";
	this->setRawBits(ref.getRawBits());
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
};

int Fixed::getRawBits(void) const {
	return (this->fixedval);
}

void Fixed::setRawBits(int const raw) {
	this->fixedval = raw;
}

float Fixed::toFloat(void) const {
	return (float)this->fixedval / (float)(1 << Fixed::bits);
}

int Fixed::toInt(void) const {
	return this->fixedval >> Fixed::bits;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr)
{
	stream << nbr.toFloat();
	return (stream);
}
