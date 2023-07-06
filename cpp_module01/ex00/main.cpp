/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:31:16 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/06 22:31:17 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main(void)
{
	Zombie* zombieHeap;

	zombieHeap = newZombie("Max");
	zombieHeap->announce();
	randomChump("Yara");
	delete  zombieHeap;
	return (0);
}