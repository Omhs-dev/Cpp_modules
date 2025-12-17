#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : numContacts(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(const Contact& newContact) {
	if (numContacts < 8)
	{
		contacts[numContacts] = newContact;
		numContacts++;
	}
	else
	{
		// Replace the oldest contact with the new contact
		contacts[0] = newContact;
	}
}

void PhoneBook::displayContacts() const {
	std::cout << std::setw(10) << std::right << "Index" << "|"
			<< std::setw(10) << std::right << "First Name" << "|"
			<< std::setw(10) << std::right << "Last Name" << "|"
			<< std::setw(10) << std::right << "Nickname" << "|"
			<< std::endl;

	for (int i = 0; i < numContacts; ++i) {
		std::string firstName = contacts[i].getFirstName();
		std::string lastName = contacts[i].getLastName();
		std::string nickname = contacts[i].getNickname();

		// Truncate > 10 and replace the last character with a dot
		if (firstName.length() > 10) firstName = firstName.substr(0, 9) + ".";
		if (lastName.length() > 10) lastName = lastName.substr(0, 9) + ".";
		if (nickname.length() > 10) nickname = nickname.substr(0, 9) + ".";

		std::cout << std::setw(10) << std::right << i << "|"
				<< std::setw(10) << std::right << firstName << "|"
				<< std::setw(10) << std::right << lastName << "|"
				<< std::setw(10) << std::right << nickname << "|"
				<< std::endl;
	}
}

void PhoneBook::searchContact(int index) const {
	if (index < 0 || index >= numContacts)
		std::cout << "Invalid index!" << std::endl;
	else
	{
		std::cout << "First Name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last Name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone Number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << contacts[index].getDarkestSecret() << std::endl;
	}
}
