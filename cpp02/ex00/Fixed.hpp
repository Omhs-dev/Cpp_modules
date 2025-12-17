/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:03:53 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/16 00:52:13 by ohamadou         ###   ########.fr       */
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
		Fixed(const Fixed &cpy);
		Fixed& operator=(const Fixed &ref);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		~Fixed();
};

#endif