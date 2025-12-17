/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 04:18:19 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 04:25:40 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <cctype>

#include <cstdlib>

class PhoneBook {
private:
    Contact contacts[8];
    int numContacts;

public:
    PhoneBook(); // Default constructor
    ~PhoneBook(); // Default deconstructor

    void addContact(const Contact& newContact);
    void displayContacts() const;
    void searchContact(int index) const;
};

#endif
