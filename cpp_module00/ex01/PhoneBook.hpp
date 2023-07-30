/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:28:33 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/25 21:52:19 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Contact.hpp"
typedef std::string String;

class	PhoneBook {
private:
	Contact	Contacts[8];
	int		numOfContacts;
	int		savedContacts;
	bool	isPhoneBookFull;
public:
	PhoneBook(void);
	PhoneBook(PhoneBook const &src);
	PhoneBook& operator=(PhoneBook const& rhs);
	void	addContact(String first, String last, String nick,
						String phonenum, String secret);
	int const&	getSavedContacts(void) const;
	void		searchPhoneBook(int index) const;
	void		printPhoneBook(int index) const;
	virtual	~PhoneBook(void);
};

std::ostream& operator<<(std::ostream& outSt, PhoneBook const& phoneBook);
