/* ************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:00:20 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/04 22:19:05 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "colors.hpp"

PhoneBook::PhoneBook(void)
			: numOfContacts(0), savedContacts(0), isPhoneBookFull(false) {
	std::cout << BLUE << "Default Constructor called!" << RECLR << std::endl;
	return ;
}

PhoneBook::PhoneBook(PhoneBook const& src) {
	std::cout << CYAN << "Copy Constructor called!" << RECLR << std::endl;
	*this = src;
	return ;
}

PhoneBook& PhoneBook::operator=(PhoneBook const& rhs) {
	std::cout << "Assignment Operator called!" << std::endl;
	if (this != &rhs) {
		for (int count = 0; count < 8; count++) {
			this->Contacts[count] = rhs.Contacts[count];
		}
		this->numOfContacts = rhs.numOfContacts;
	}
	return (*this);
}

void	PhoneBook::addContact(String first, String last, String nick,
						String phonenum, String secret) {
	int	count;

	count = numOfContacts % 8;
	Contact contact = Contact(first, last, nick, phonenum, secret);
	this->Contacts[count] = contact;
	this->numOfContacts++;
	if (this->numOfContacts == 8)
		this->isPhoneBookFull = true;
	if (!this->isPhoneBookFull)
		this->savedContacts++;
	return ;
}

void	PhoneBook::searchPhoneBook(int index) const {
	if (index > 8 || index < 1) {
		std::cout << RED << "Please enter a vaild index between 1:8" << RECLR << std::endl;
		return ;
	}
	else if (index > this->numOfContacts + 1) {
		std::cout << YELLOW << "Index " << index << " is empty!" << RECLR << std::endl;
		return ;
	}
	std::cout << this->Contacts[index - 1] << std::endl;
	return ;
}

int const&	PhoneBook::getSavedContacts(void) const {
	return (this->savedContacts);
}

void	PhoneBook::printPhoneBook(int index) const {
	this->Contacts[index].displayContact();
	return ;
}

PhoneBook::~PhoneBook(void) {
	std::cout << RED << "Destructor Called!" << RECLR << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& outSt, PhoneBook const& phonebook) {
	std::cout << YELLOW << std::setw(30) << "** Phone Book **" << RECLR << std::endl;
	std::cout << "______________________________________________" << std::endl;
	std::cout << "|" << GREEN << std::setw(10) << "Index" << RECLR;
	std::cout << "|" << GREEN << std::setw(10) << "First Name" << RECLR;
	std::cout << "|" << GREEN << std::setw(10) << "Last Name" << RECLR;
	std::cout << "|" << GREEN << std::setw(10) << "Nick Name" << RECLR;
	std::cout << "|" << std::endl;
	std::cout << "______________________________________________" << std::endl;
	for (int count = 0; count < phonebook.getSavedContacts(); count++) {
		std::cout << "|" << std::setw(10) << count + 1;
		phonebook.printPhoneBook(count);
	}
	std::cout << "______________________________________________" << std::endl;
	return (outSt);
}
