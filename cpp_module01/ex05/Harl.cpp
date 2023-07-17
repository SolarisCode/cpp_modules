/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:18:54 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/18 00:20:10 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << "Default Constructor Called!" << std::endl;
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
	std::cout << "I love having extra bacon for my" <<
		" 7XL-double-cheese-triple-pickle-specialketchup" <<
		" burger. I really do!" << std::endl;
	return;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon" <<
		" costs more money. You didn’t put enough bacon" <<
		" in my burger! If you did, I wouldn’t be asking" <<
		" for more!" << std::endl;
	return;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra " <<
		"bacon for free. I’ve been coming for years whereas " <<
		"you started working here since last month." << std::endl;
	return;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to " <<
		"the manager now." << std::endl;
	return;
}

void	Harl::complain(std::string level) {
	void(Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4]= {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int index = 0; index < 4; index++) {
		if (level == levels[index]) {
			(this->*funcPtr[index])();
			return;
		}
	}
}

Harl::~Harl(void) {
	std::cout << "Destructor Called!" << std::endl;
	return;
}
