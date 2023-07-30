/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 15:32:50 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/04 22:15:24 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
typedef std::string String;

class	Contact {
private:
	String	firstName;
	String	lastName;
	String	nickName;
	String	phoneNumber;
	String	darkestSecret;
public:
	Contact(void);
	Contact(String first, String last, String nick,
			String number, String secret);
	Contact(Contact const& src);
	String const&	getFirstName(void) const;
	String const&	getLastName(void) const;
	String const&	getNickName(void) const;
	String const&	getPhoneNumber(void) const;
	String const&	getDarkestSecret(void) const;
	Contact& operator=(Contact const& rhs);
	void	adjustDisplay(String const& elm) const;
	void	displayContact(void) const;
	virtual	~Contact(void);
};

std::ostream& operator<<(std::ostream& outSt, Contact const& contact);
