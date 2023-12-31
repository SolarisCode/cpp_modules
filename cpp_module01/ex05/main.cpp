/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 00:12:56 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/18 00:22:28 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void) {
	Harl	karn;

	karn.complain("DEBUG");
	std::cout << ">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << std::endl;
	karn.complain("INFO");
	std::cout << ">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << std::endl;
	karn.complain("WARNING");
	std::cout << ">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << std::endl;
	karn.complain("ERROR");
	std::cout << ">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<" << std::endl;
	return (0);
}
