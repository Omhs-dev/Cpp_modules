/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:03:43 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 20:25:37 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : fixedval(0) {
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int intValue) : fixedval(intValue * (1 << Fixed::bits))
{
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float floatValue) : fixedval( roundf(floatValue * (1 << Fixed::bits)) )
{
	// std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &refcpy) {
	// std::cout << "Copy constructor called\n";
	*this = refcpy;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	// std::cout << "Copy assignment operator called\n";
	this->setRawBits(ref.getRawBits());
	return (*this);
}

Fixed::~Fixed(void) {
	// std::cout << "Destructor called\n";
};

int Fixed::getRawBits(void) const {
	return (this->fixedval);
}

void Fixed::setRawBits(int const raw) {
	this->fixedval = raw;
}

float Fixed::toFloat(void) const
{
	return (float)this->fixedval / (float)(1 << Fixed::bits);
}

int Fixed::toInt(void) const
{
	return this->fixedval >> Fixed::bits;
}

std::ostream &operator<<(std::ostream &stream, const Fixed &fixdnbr)
{
	stream << fixdnbr.toFloat();
	return (stream);
}

bool Fixed::operator>(const Fixed &nbr)
{
	return this->fixedval > nbr.getRawBits();
}

bool Fixed::operator<(const Fixed &nbr)
{
	return this->fixedval < nbr.getRawBits();
}

bool Fixed::operator>=(const Fixed &nbr)
{
	return this->fixedval >= nbr.getRawBits();
}

bool Fixed::operator<=(const Fixed &nbr)
{
	return this->fixedval <= nbr.getRawBits();
}

bool Fixed::operator==(const Fixed &nbr)
{
	return this->fixedval == nbr.getRawBits();
}

bool Fixed::operator!=(const Fixed &nbr)
{
	return this->fixedval != nbr.getRawBits();
}

Fixed Fixed::operator+(const Fixed &nbr)
{
	return Fixed( this->toFloat() + nbr.toFloat() );
}

Fixed Fixed::operator-(const Fixed &nbr)
{
	return Fixed( this->toFloat() - nbr.toFloat() );
}

Fixed Fixed::operator*(const Fixed &nbr)
{
	return Fixed ( this->toFloat() * nbr.toFloat() );
}

Fixed Fixed::operator/(const Fixed &nbr)
{
	return Fixed ( this->toFloat() / nbr.toFloat() );
}

// pre increment
Fixed &Fixed::operator++(void)
{
	this->fixedval += 1;
	return *this;
}

// post increment
Fixed Fixed::operator++(int)
{
	Fixed tmp(this->fixedval * toFloat());
	this->fixedval += 1;
	return tmp;
}

// pre decrement
Fixed &Fixed::operator--(void)
{
	this->fixedval -= 1;
	return *this;
}

// post decrement
Fixed Fixed::operator--(int)
{
	Fixed tmp(this->fixedval * toFloat());
	this->fixedval -= 1;
	return tmp;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}
