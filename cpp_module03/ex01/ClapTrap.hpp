/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:44:19 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/27 15:01:52 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const& src);
	ClapTrap&	operator=(ClapTrap const& rhs);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getAttackDamage(void) const;
	void		setName(std::string newName);
	void		setHitPoints(int hitPoints);
	void		setEnergyPoints(int energyPoints);
	void		setAttackDamage(int attackPoints);
	~ClapTrap(void);

protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};
