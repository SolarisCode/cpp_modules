/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:39:18 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/21 17:26:46 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "DiamondTrap Default Constructor Called!" << std::endl;
	this->setName("DiamondTrap");
	this->ClapTrap::setName(this->getName() + "_clap_name");
	this->setHitPoints(FragTrap::hitPoints);
	this->setEnergyPoints(ScavTrap::energyPoints);
	this->setAttackDamage(FragTrap::attackDamage);
	return;
}

DiamondTrap::DiamondTrap(std::string name)
	: _name(name) {
	std::cout << "DiamondTrap Parametric Constructor Called!" << std::endl;
	this->ClapTrap::setName(name + "_clap_name");
	this->setHitPoints(FragTrap::hitPoints);
	this->setEnergyPoints(ScavTrap::energyPoints);
	this->setAttackDamage(FragTrap::attackDamage);
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
		this->setName(rhs.DiamondTrap::getName());
		this->setHitPoints(rhs.FragTrap::hitPoints);
		this->setEnergyPoints(rhs.ScavTrap::energyPoints);
		this->setAttackDamage(rhs.FragTrap::attackDamage);
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
				<< ", my ClapTrap name is: " << this->ClapTrap::getName()
				<< std::endl;
	return;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap Destructor Called!" << std::endl;
	return;
}

std::ostream&	operator<<(std::ostream& OST, DiamondTrap const& diamondtrap) {
	OST << diamondtrap.getName() << " health status:" << std::endl;
	OST << "Hit Points: " << diamondtrap.getHitPoints() << std::endl;
	OST << "Energy Points: " << diamondtrap.getEnergyPoints() << std::endl;
	OST << "Attack Damage: " << diamondtrap.getAttackDamage() << std::endl;
	return (OST);
}
