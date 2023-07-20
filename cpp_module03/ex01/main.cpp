/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:03:51 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 22:13:11 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	wallE("Wall-E");

	wallE.guardGate();
	wallE.attack("Wild Bear");
	wallE.takeDamage(5);
	wallE.beRepaired(3);
	wallE.takeDamage(5);
	wallE.takeDamage(5);
	wallE.guardGate();
	wallE.attack("Lion");
	wallE.beRepaired(3);
	return (0);
}
