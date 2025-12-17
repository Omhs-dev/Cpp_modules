/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 05:59:23 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 06:39:00 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"
#include <fstream>

bool StringReplacer::replace(std::string& filename, std::string& s1, std::string& s2) {
    // Open the input file
    std::ifstream input(filename.c_str());
    if (!input) {
        std::cerr << "Error: Unable to open input file " << std::endl;
        return false;
    }

    // Open the output file
    std::ofstream output((filename + ".replace").c_str());
    if (!output) {
        std::cerr << "Error: Unable to create output file " << std::endl;
        return false;
    }

    // Read from input and write to output, replacing occurrences of s1 with s2
    std::string line;
    while (std::getline(input, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            line.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        if (!input.eof())
            output << line << std::endl;
        else
        {
            output << line;
            break;
        }
    }

    return true;
}
