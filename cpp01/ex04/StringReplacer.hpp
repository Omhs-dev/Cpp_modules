/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 05:59:07 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 06:27:47 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_REPLACER_HPP
#define STRING_REPLACER_HPP

#include <string>
# include <iostream>

class StringReplacer {
	public:
	    bool replace(std::string& filename, std::string& s1, std::string& s2);
};

#endif
