/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:12:56 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/18 01:50:18 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

int	main(int argc, char* argv[]) {
	Harl	karn;

	if (argc < 2 || argc > 2) {
		std::cout << "Invalid input: <program_name><complain_level>" << std::endl;
		return (1);
	}
	karn.complain(argv[1]);
	return (0);
}
