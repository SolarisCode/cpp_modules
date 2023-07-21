/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:03:51 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/21 17:40:16 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void) {
	ScavTrap	wallE("Wall-E");
	FragTrap	fragMan("Warrior");

	std::cout << "ScavTrap Demo" << std::endl;
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
	std::cout << "FragTrap Demo" << std::endl;

	fragMan.attack("Wolf");
	fragMan.takeDamage(30);
	fragMan.beRepaired(10);
	fragMan.highFivesGuys();

	std::cout << std::endl;
	std::cout << "DiamondTrap Demo" << std::endl;

	DiamondTrap	dino("Dino");
	dino.whoAmI();
	dino.attack("Tiger");
	dino.takeDamage(20);
	dino.beRepaired(5);
	dino.guardGate();
	dino.highFivesGuys();
	std::cout << dino;
	std::cout << std::endl;
	
	return (0);
}
