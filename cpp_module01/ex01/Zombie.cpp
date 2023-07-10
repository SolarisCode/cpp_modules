/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:28:14 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/10 15:12:32 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
typedef std::string String;

Zombie::Zombie(void) {
	std::cout << "Defualt Constructor called!" << std::endl;
	return;
}

Zombie::Zombie(String name) : _name(name) {
	std::cout << "Parametric Constructor called!" << std::endl;
	return;
}

Zombie::Zombie(Zombie const& src) {
	std::cout << "Copy Constructor called!" << std::endl;
	*this = src;
	return;
}

Zombie&	Zombie::operator=(Zombie const& rhs) {
	std::cout << "Assignment Operator called!" << std::endl;
	if (this != &rhs) {
		this->_name = rhs._name;
	}
	return (*this);
}

void	Zombie::setName(String name) {
	_name = name;
	return;
}

void	Zombie::announce(void) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << _name << " is destoryed!" << std::endl;
	return;
}
