/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:03:51 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/21 15:21:01 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	// DiamondTrap	dino("Dino");
	//
	// dino.whoAmI();
	// dino.attack("Tiger");
	// dino.takeDamage(20);
	// dino.beRepaired(5);
	// dino.guardGate();
	// dino.highFivesGuys();
	// std::cout << "Hit Points: " << dino.getHitPoints() << std::endl;
	// std::cout << "Energy Points: " << dino.getEnergyPoints() << std::endl;
	// std::cout << "Attack Damage: " << dino.getAttackDamage() << std::endl;
	
	return (0);
}
