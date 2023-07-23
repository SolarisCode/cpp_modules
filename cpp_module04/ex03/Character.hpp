/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 01:49:58 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/23 18:42:56 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CHARACTER_CLASS
#define CHARACTER_CLASS
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character(void);
	Character(std::string name);
	Character(Character const& src);
	Character &operator=(Character const& rhs);
	AMateria* const*	getInventory(void) const;
	AMateria* const*	getEquiped(void) const;
	std::string const&	getName() const;
	void	setToNull(void);
	void	setLength(int count);
	int		getLength(void) const;
	void	setEquipLength(int count);
	int		getEquipLength(void) const;
	void	setName(std::string name);
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
	~Character(void);

private:
	AMateria*	_inventory[4];
	AMateria*	_equiped[4];
	std::string	_name;
	int			_length;
	int			_equipLength;
};

#endif
