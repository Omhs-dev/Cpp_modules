/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 23:37:20 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 06:40:58 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "Error: arguments not correct" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    StringReplacer replacer;
    if (!replacer.replace(filename, s1, s2)) {
        std::cerr << "Error: Failed to replace occurrences of s1 with s2" << std::endl;
        return 1;
    }

    std::cout << "Replacement completed." << std::endl;
    return 0;
}
