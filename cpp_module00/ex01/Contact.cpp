/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 22:16:56 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/04 22:21:20 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "colors.hpp"

Contact::Contact(void) {
	std::cout << BLUE << "Default Constructor called!" << RECLR << std::endl;
	return ;
}

Contact::Contact(String first, String last, String nick,
				String number, String secret)
			: firstName(first), lastName(last), nickName(nick),
				phoneNumber(number), darkestSecret(secret) {
	std::cout << MAGENTA << "Parametric Constructor called!" << RECLR << std::endl;
	return ;
}

Contact::Contact(Contact const& src) {
	std::cout << CYAN << "Copy Constructor called!" << RECLR << std::endl;
	*this = src;
	return ;
}

String const&	Contact::getFirstName(void) const {
	return (this->firstName);
}

String const&	Contact::getLastName(void) const {
	return (this->lastName);
}

String const&	Contact::getNickName(void) const {
	return (this->nickName);
}

String const&	Contact::getPhoneNumber(void) const {
	return (this->phoneNumber);
}

String const&	Contact::getDarkestSecret(void) const {
	return (this->darkestSecret);
}

Contact& Contact::operator=(Contact const& rhs) {
	std::cout << "Assignment Operator called!" << std::endl;
	if (this != &rhs) {
		this->firstName = rhs.getFirstName();
		this->lastName = rhs.getLastName();
		this->nickName = rhs.getNickName();
		this->phoneNumber = rhs.getPhoneNumber();
		this->darkestSecret = rhs.getDarkestSecret();
	}
	return (*this);
}

void Contact::adjustDisplay(String const& elm) const {
	if (elm.length() > 10)
		std::cout << CYAN << std::setw(10) << elm.substr(0, 9) + "." << RECLR;
	else
		std::cout << CYAN << std::setw(10) << elm << RECLR;
	return ;
}

void	Contact::displayContact(void) const {
	std::cout << '|';
	Contact::adjustDisplay(this->firstName);
	std::cout << '|';
	Contact::adjustDisplay(this->lastName);
	std::cout << '|';
	Contact::adjustDisplay(this->nickName);
	std::cout << '|' << std::endl;
	return ;
}

Contact::~Contact(void) {
	std::cout << RED << "Destructor Called!" << RECLR << std::endl;
	return ;
}

std::ostream& operator<<(std::ostream& outSt, Contact const& contact) {
	std::cout << YELLOW << "|       ** Contact Information **       |" << RECLR << std::endl;
	std::cout << "_________________________________________" << std::endl;
	std::cout << GREEN << "First Name: " << contact.getFirstName() << RECLR << std::endl;
	std::cout << GREEN << "Last Name: " << contact.getLastName() << RECLR << std::endl;
	std::cout << GREEN << "Nick Name: " << contact.getNickName() << RECLR << std::endl;
	std::cout << GREEN << "Phone Number: " << contact.getPhoneNumber() << RECLR << std::endl;
	std::cout << GREEN << "Darkest Secret: " << contact.getDarkestSecret() << RECLR << std::endl;
	return (outSt);
}
