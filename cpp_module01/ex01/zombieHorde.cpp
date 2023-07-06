/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:30:12 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/06 22:30:14 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie*	horde;

	horde = new Zombie[N];
	for (int count = 0; count < N; count++) {
		horde[count].setName(name);
		horde[count].announce();
	}
	return (horde);
}