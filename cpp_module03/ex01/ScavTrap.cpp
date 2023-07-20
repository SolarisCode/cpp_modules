/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:15:20 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 22:09:02 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << "ScavTrap Default Constructor Called!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Parametric Constructor Called!" << std::endl;
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap() {
	std::cout << "ScavTrap Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs) {
	std::cout << "ScavTrap Assignment operator called!" << std::endl;
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap is now in Gate keeper mode." <<  std::endl;
	return;
}

void	ScavTrap::attack(const std::string& target) {
	if (!this->getEnergyPoints() || !this->getHitPoints()) {
		std::cout << "There is no enough Hit or Energy Points!" << std::endl;
		return;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName() <<
		" attacks " << target << ", causing " << this->getAttackDamage() <<
		" points of damage!" << std::endl;
	return;
}

void	ScavTrap::takeDamage(unsigned int amount) {
	int	newHitPoints;

	newHitPoints = (unsigned)this->getHitPoints() < amount ? 0: this->getHitPoints() - amount;
	this->setHitPoints(newHitPoints);
	std::cout << "ScavTrap " << this->getName() <<
		" is taking " << amount << " points of damage!, new Hit points: " <<
		this->getHitPoints() << std::endl;
	return;
}

void	ScavTrap::beRepaired(unsigned int amount) {
	if (!this->getEnergyPoints() || !this->getHitPoints()) {
		std::cout << "There is no enough Hit or Energy Points!" << std::endl;
		return;
	}
	this->setHitPoints(this->getHitPoints() + amount);
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ScavTrap " << this->getName() <<
		" repaired itself, new Hit points: " << this->getHitPoints() << std::endl;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap Destructor Called!" << std::endl;
	return;
}
