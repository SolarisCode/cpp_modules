/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:44:19 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 15:54:39 by melkholy         ###   ########.fr       */
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
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	~ClapTrap(void);

private:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
};
