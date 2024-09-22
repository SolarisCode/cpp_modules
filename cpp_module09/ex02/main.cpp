/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:51:24 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/22 17:51:26 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char** argv)
{
	if (argc < 2)
	{
		std::cout << "Error\n";
		return (0);
	}

	PmergeMe p_merg_me;
	p_merg_me.merge_me(argv, argc);
	return (0);
}
