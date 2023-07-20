/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:03:51 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/20 17:13:45 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	jack = ClapTrap("Jack");

	jack.attack("Wild Bear");
	jack.takeDamage(5);
	jack.beRepaired(3);
	jack.takeDamage(5);
	jack.takeDamage(5);
	jack.attack("Lion");
	jack.beRepaired(3);
	return (0);
}
