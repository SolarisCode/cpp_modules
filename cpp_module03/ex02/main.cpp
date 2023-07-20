/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:03:51 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/21 00:02:14 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void) {
	ScavTrap	wallE("Wall-E");
	FragTrap	fragMan("Warrior");

	wallE.guardGate();
	wallE.attack("Wild Bear");
	wallE.takeDamage(5);
	wallE.beRepaired(3);
	wallE.takeDamage(5);
	wallE.takeDamage(5);
	wallE.guardGate();
	wallE.attack("Lion");
	wallE.beRepaired(3);

	std::cout << std::endl;
	std::cout << std::endl;
	
	fragMan.attack("Wolf");
	fragMan.takeDamage(30);
	fragMan.beRepaired(10);
	fragMan.highFivesGuys();
	
	return (0);
}
