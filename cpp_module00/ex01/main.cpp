/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 20:33:01 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/04 22:26:52 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "colors.hpp"

void	addNewContact(PhoneBook& phonebook) {
	String	first;
	String	last;
	String	nick;
	String	phonenum;
	String	darksecret;

	std::cout << "Enter First Name: ";
	std::getline(std::cin, first);
	std::cout << "Enter Last Name: ";
	std::getline(std::cin, last);
	std::cout << "Enter Nickname: ";
	std::getline(std::cin, nick);
	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phonenum);
	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, darksecret);
	phonebook.addContact(first, last, nick, phonenum, darksecret);
}

void	searchContacts(PhoneBook& phonebook) {
	String	index;

	if (!phonebook.getSavedContacts()) {
		std::cout << RED << "PhoneBook is empty, Please add some contacts!" <<
			RECLR << std::endl;
		return ;
	}
	std::cout << phonebook << std::endl;
	std::cout << YELLOW << "Please choose the desired index: " << RECLR;
	std::cin >> index;
	phonebook.searchPhoneBook(std::atoi(index.c_str()));
}

int	main(void) {
	PhoneBook	phonebook;
	String		userInput;

	std::cout << GREEN << "Welcome the PhoneBook App" << RECLR << std::endl;
	while (true) {
		std::cout << YELLOW << "Please choose one of these commands:" << RECLR << std::endl;
		std::cout << BLUE << "ADD, SEARCH, EXIT" << RECLR << std::endl;
		std::getline(std::cin >> std::ws, userInput);
		if (!userInput.compare("EXIT"))
			exit(0);
		else if (!userInput.compare("ADD"))
			addNewContact(phonebook);
		else if (!userInput.compare("SEARCH"))
			searchContacts(phonebook);
		else
			std::cout << RED << "Please enter a valid input!" << RECLR << std::endl;
	}
}
