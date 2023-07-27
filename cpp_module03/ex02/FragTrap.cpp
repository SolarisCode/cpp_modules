/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:15:20 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/27 15:24:17 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << "FragTrap Default Constructor Called!" << std::endl;
	this->setName("FragTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap Parametric Constructor Called!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	return;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src) {
	std::cout << "FragTrap Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs) {
	std::cout << "FragTrap Assignment operator called!" << std::endl;
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

void	FragTrap::attack(const std::string& target) {
	if (!this->getEnergyPoints() || !this->getHitPoints()) {
		std::cout << "There is no enough Hit or Energy Points!" << std::endl;
		return;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "FragTrap " << this->getName() <<
		" attacks " << target << ", causing " << this->getAttackDamage() <<
		" points of damage!" << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->getName() << " is requesting a positive high five!"
			<< std::endl;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor Called!" << std::endl;
	return;
}
