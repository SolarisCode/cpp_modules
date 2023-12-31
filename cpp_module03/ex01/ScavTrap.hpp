/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:18:43 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 23:35:41 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& src);
	ScavTrap& operator=(ScavTrap const& rhs);
	void	guardGate(void);
	void	attack(const std::string& target);
	~ScavTrap(void);
};
