/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:15:05 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/15 04:53:24 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main() {
    PhoneBook myPhoneBook;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, or EXIT): ";
        std::string command;
        std::cin >> command;

        if (command == "ADD") {
            std::cout << "Enter contact information:" << std::endl;
            std::string fname, lname, nick, phone, secret;
            std::cout << "First Name: ";
            std::cin.ignore(); // Ignore any leftover newline characters
            std::getline(std::cin, fname);
            std::cout << "Last Name: ";
            std::getline(std::cin, lname);
            std::cout << "Nickname: ";
            std::getline(std::cin, nick);
            std::cout << "Phone Number: ";
            std::cin >> phone;
            
			bool isValidPhoneNumber = true;
	        for (std::string::size_type i = 0; i < phone.length(); ++i)
	        {
	            if (!isdigit(phone[i])) {
	                isValidPhoneNumber = false;
	                break;
	            }
	        }
	        if (!isValidPhoneNumber)
	        {
	            std::cout << "Invalid phone number! Please enter digits only." << std::endl;
	            continue;
	        }
	        
            std::cout << "Darkest Secret: ";
            std::cin >> secret;
            Contact newContact(fname.c_str(), lname.c_str(), nick.c_str(), phone.c_str(), secret.c_str());
            myPhoneBook.addContact(newContact);
        }
        else if (command == "SEARCH")
        {
            myPhoneBook.displayContacts();
            int index;
            std::cout << "Enter the index of the contact to display: ";
            std::cin >> index;
            if (std::cin.fail())
            {
                std::cin.clear(); 
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
                std::cout << "Invalid input! Please enter a valid index." << std::endl;
                continue;
            }
            myPhoneBook.searchContact(index);
        }
        else if (command == "EXIT")
            break;
        else
        {
            std::cout << "Invalid command: Please enter ADD, SEARCH, or EXIT." << std::endl;
            continue;
        }
    }

    return 0;
}
