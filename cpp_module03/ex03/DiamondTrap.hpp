/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 00:26:22 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/21 14:05:39 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class	DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& src);
	DiamondTrap&	operator=(DiamondTrap const& rhs);
	// void	(*attack)(std::string);
	std::string		getName(void) const;
	void			setName(std::string name);
	void			attack(std::string target);
	void			whoAmI(void);
	~DiamondTrap(void);

private:
		std::string	_name;
};
