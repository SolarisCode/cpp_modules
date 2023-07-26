/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:18:54 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/26 22:54:36 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

Harl::Harl(void) {
	return;
}

Harl::Harl(Harl const& src) {
	std::cout << "Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

Harl&	Harl::operator=(Harl const& rhs) {
	std::cout << "Assignment Operator Called!" << std::endl;
	if (this != &rhs) {
		*this = rhs;
	}
	return (*this);
}

void	Harl::debug(void) {
	std::cout << "[ DEBUG ]\nI love having extra bacon for my" <<
		" 7XL-double-cheese-triple-pickle-specialketchup" <<
		" burger.\nI really do!" << std::endl;
	std::cout << std::endl;
	return;
}

void	Harl::info(void) {
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon" <<
		" costs more money.\nYou didn’t put enough bacon" <<
		" in my burger! If you did, I wouldn’t be asking" <<
		" for more!" << std::endl;
	std::cout << std::endl;
	return;
}

void	Harl::warning(void) {
	std::cout << "[ WARNING ]\nI think I deserve to have some extra " <<
		"bacon for free.\nI’ve been coming for years whereas " <<
		"you started working here since last month." << std::endl;
	std::cout << std::endl;
	return;
}

void	Harl::error(void) {
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to " <<
		"the manager now." << std::endl;
	std::cout << std::endl;
	return;
}

void	Harl::complain(std::string level) {
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			index = 0;

	for (; levels[index] != level && index <= 4; index++) {}
	switch (index) {
		case 0:
			this->debug();
			// fall through
		case 1:
			this->info();
			// fall through
		case 2:
			this->warning();
			// fall through
		case 3:
			this->error();
	}
}

Harl::~Harl(void) {
	return;
}
