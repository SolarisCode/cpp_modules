/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:18:43 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/21 13:01:00 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const& src);
	FragTrap& operator=(FragTrap const& rhs);
	void	attack(const std::string& target);
	void	highFivesGuys(void);
	~FragTrap(void);
};
