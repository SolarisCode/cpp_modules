/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 02:16:57 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 03:39:36 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <string>

Character::Character(void) : _length(0), _equipLength(0) {
	std::cout << "Character Defualt Constructor Called!" << std::endl;
	return;
}

Character::Character(std::string& name)
	: _name(name), _length(0), _equipLength(0) {
	std::cout << "Character Parametric Constructor Called!" << std::endl;
	return;
}

Character::Character(Character const& src) {
	std::cout << "Character Copy Constructor Called!" << std::endl;
	if (src.getLength())
	{
		for (int index = 0; index < src.getLength(); index++) {
			this->_inventory[index] = src.getInventory()[index];
		}
		this->setLength(src.getLength());
	}
	else
		this->_length = 0;
	if (src.getEquipLength())
	{
		for (int index = 0; index < src.getEquipLength(); index++) {
			this->_inventory[index] = src.getEquiped()[index];
		}
		this->setEquipLength(src.getEquipLength());
	}
	else
		this->_equipLength = 0;
	this->setName(src.getName());
	return;
}

Character&	Character::operator=(Character const& rhs) {
	std::cout << "Character Assignment operator Called!" << std::endl;
	if (rhs.getLength()) {
		for (int index = 0; index < rhs.getLength(); index++) {
			this->_inventory[index] = rhs.getInventory()[index];
		}
		this->setLength(rhs.getLength());
	}
	if (rhs.getEquipLength()) {
		for (int index = 0; index < rhs.getEquipLength(); index++) {
			this->_inventory[index] = rhs.getEquiped()[index];
		}
		this->setEquipLength(rhs.getEquipLength());
	}
	this->setName(rhs.getName());
	return (*this);
}


AMateria* const*	Character::getInventory(void) const {
	return (this->_inventory);
}

AMateria* const*	Character::getEquiped(void) const {
	return (this->_equiped);
}

void	Character::setLength(int count) {
	this->_length = count;
	return;
}

int	Character::getLength(void) const {
	return (this->_length);
}

void	Character::setEquipLength(int count) {
	this->_equipLength = count;
	return;
}

int	Character::getEquipLength(void) const {
	return (this->_equipLength);
}

void	Character::setName(std::string name) {
	this->_name = name;
	return;
}

std::string const&	Character::getName(void) const {
	return (this->_name);
}

void	Character::equip(AMateria* m) {
	if (this->getLength() > 3) {
		return;
	}
	this->_inventory[this->_length] = m;
	this->_equiped[this->_equipLength] = m;
	this->_length++;
	this->_equipLength++;
	return;
}

void	Character::unequip(int idx) {
	if (idx > this->getEquipLength()) {
		return;
	}
	this->_equiped[idx] = this->_equiped[_equipLength];
	this->_equiped[_equipLength] = NULL;
	this->_equipLength--;
	return;
}

void	Character::use(int idx, ICharacter& target) {
	if (idx > this->getEquipLength()) {
		return;
	}
	this->_equiped[idx]->use(target);
}

Character::~Character(void) {
	std::cout << "Character Destructor Called!" << std::endl;
	return;
}
