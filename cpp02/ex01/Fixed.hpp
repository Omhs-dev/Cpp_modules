/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:03:53 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 00:37:36 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int fixedval;
		static const int bits = 8;
	
	public:
		Fixed(void);
    Fixed(const int inInt);
    Fixed(const float floatValue);
    Fixed(const Fixed &refcpy);
    Fixed &operator=(const Fixed &ref);
    ~Fixed();

    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
	
};

std::ostream &operator<<(std::ostream &stream, const Fixed &nbr);

#endif