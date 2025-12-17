/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:03:53 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 00:37:24 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int fixedval;
		static const int bits = 8;
	
	public:
		Fixed(void);
	    Fixed(const int inInt);
	    Fixed(const float floatValue);
	    Fixed(const Fixed &to_copy);
	    Fixed &operator=(const Fixed &original);
	    ~Fixed();

	    int getRawBits(void) const;
	    void setRawBits(int const raw);
	    float toFloat(void) const;
	    int toInt(void) const;
	    
	    bool	operator>(const Fixed &reference);
		bool	operator>=(const Fixed &reference);
		bool	operator<(const Fixed &reference);
		bool	operator<=(const Fixed &reference);
		bool	operator==(const Fixed &reference);
		bool	operator!=(const Fixed &reference);
	    
	    Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
	
		Fixed	operator+(const Fixed &reference);
		Fixed	operator-(const Fixed &reference);
		Fixed	operator/(const Fixed &reference);
		Fixed	operator*(const Fixed &reference);
	
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);
		
		static Fixed& min(Fixed &a, Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
	
};

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr);

#endif