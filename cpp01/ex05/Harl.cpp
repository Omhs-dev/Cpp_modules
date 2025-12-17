/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 06:55:29 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 07:34:06 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

#define H_DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. \nI really do!"
#define H_INFO "I cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, \nI wouldn't be asking for more!"
#define H_WARNING "I think I deserve to have some extra bacon for free. \nI’ve been coming for years whereas you started working here since last month."
#define H_ERROR "This is unacceptable! \nI want to speak to the manager now."

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug() {
    std::cout << H_DEBUG << std::endl;
}

void Harl::info() {
    std::cout << H_INFO << std::endl;
}

void Harl::warning() {
    std::cout << H_WARNING << std::endl;
}

void Harl::error() {
    std::cout << H_ERROR << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*pointers_to_functions[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string input_level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && level != input_level[i])
        i++;
    if (i < 4)
        (this->*pointers_to_functions[i])();
}
