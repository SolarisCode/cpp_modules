/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:54:13 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 21:41:32 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap Default Constructor Called!" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
		std::cout << "ClapTrap Parametric Constructor Called!" << std::endl;
		return;
}

ClapTrap::ClapTrap(ClapTrap const& src) {
	std::cout << "ClapTrap Copy Constructor Called!" << std::endl;
	*this = src;
	return;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs){
	std::cout << "ClapTrap Assignment operator called!" << std::endl;
	if (this != &rhs) {
		this->setName(rhs.getName());
		this->setHitPoints(rhs.getHitPoints());
		this->setEnergyPoints(rhs.getEnergyPoints());
		this->setAttackDamage(rhs.getAttackDamage());
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (!this->getEnergyPoints() || !this->getHitPoints()) {
		std::cout << "There is no enough Hit or Energy Points!" << std::endl;
		return;
	}
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ClapTrap " << this->getName() <<
		" attacks " << target << ", causing " << this->getAttackDamage() <<
		" points of damage!" << std::endl;
	return;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	int	newHitPoints;

	newHitPoints = (unsigned)this->getHitPoints() < amount ? 0: this->getHitPoints() - amount;
	this->setHitPoints(newHitPoints);
	std::cout << "ClapTrap " << this->getName() <<
		" is taking " << amount << " points of damage!, new Hit points: " <<
		this->getHitPoints() << std::endl;
	return;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (!this->getEnergyPoints() || !this->getHitPoints()) {
		std::cout << "There is no enough Hit or Energy Points!" << std::endl;
		return;
	}
	this->setHitPoints(this->getHitPoints() + amount);
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	std::cout << "ClapTrap " << this->getName() <<
		" repaired itself, new Hit points: " << this->getHitPoints() << std::endl;
	return;
}

std::string	ClapTrap::getName(void) const {
	return (this->_name);
}

int	ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}

int	ClapTrap::getAttackDamage(void) const {
	return (this->_attackDamage);
}

void	ClapTrap::setName(std::string newName) {
	this->_name = newName;
	return;
}

void	ClapTrap::setHitPoints(int hitPoints) {
	this->_hitPoints = hitPoints;
	return;
}

void	ClapTrap::setEnergyPoints(int energyPoints) {
	this->_energyPoints = energyPoints;
	return;
}

void	ClapTrap::setAttackDamage(int attackDamage) {
	this->_attackDamage = attackDamage;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor Called!" << std::endl;
	return;
}
