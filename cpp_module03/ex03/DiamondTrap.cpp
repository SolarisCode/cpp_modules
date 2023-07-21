/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:39:18 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/21 14:06:36 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap Default Constructor Called!" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), _name(name) {
	std::cout << "DiamondTrap Parametric Constructor Called!" << std::endl;
	this->setHitPoints(FragTrap::getHitPoints());
	this->setEnergyPoints(ScavTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src)
	: ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs) {
	std::cout << "DiamondTrap Assignment operator called!" << std::endl;
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

std::string	DiamondTrap::getName(void) const {
	return (this->_name);
}

void	DiamondTrap::setName(std::string name) {
	this->_name = name;
}

void	DiamondTrap::attack(std::string target) {
	return (ScavTrap::attack(target));
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "My name is: " << this->getName()
				<< ", my ClapTrap name is: " << ClapTrap::getName()
				<< std::endl;
	return;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Destructor Called!" << std::endl;
	return;
}
