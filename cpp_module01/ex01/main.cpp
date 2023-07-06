/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:28:30 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/06 22:28:32 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie*	zombieGroup;

	zombieGroup = zombieHorde(5, "Legion");
	delete [] zombieGroup;
	return (0);
}