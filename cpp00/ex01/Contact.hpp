/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohamadou <ohamadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:48:53 by ohamadou          #+#    #+#             */
/*   Updated: 2024/04/14 19:00:44 by ohamadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
	//constructor deconstructor
    Contact(void);
    ~Contact(void);
    Contact(const char* fname, const char* lname, const char* nick, const char* phone, const char* secret);

    
    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
    
    void		setFirstName(std::string firstName);
	void		setLastName(std::string lastName);
	void		setNickname(std::string nickname);
	void		setPhoneNumber(std::string phoneNumber);
	void		setDarkestSecret(std::string darkestSecret);
};

#endif

// class Contact {
// private:
//     char firstName[11];
//     char lastName[11];
//     char nickname[11];
//     char phoneNumber[11];
//     char darkestSecret[31];

// public:
//     Contact(); // Default constructor
//     Contact(const char* fname, const char* lname, const char* nick, const char* phone, const char* secret); // Parameterized constructor

//     // Public member functions to access private member variables
//     const char* getFirstName() const;
//     const char* getLastName() const;
//     const char* getNickname() const;
// };

// #endif