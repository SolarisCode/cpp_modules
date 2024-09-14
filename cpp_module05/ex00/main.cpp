/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:16:14 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/14 14:45:39 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <exception>
#include <iostream>

int	main(void) {
	Bureaucrat exercise("Jack", 150);
	try
	{
		exercise.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "No no man you can't do that!" << std::endl;
		std::cout << e.what() << std::endl;
	}
	exercise.incrementGrade();
	// exercise.decrementGrade();
	std::cout << exercise << std::endl;
	return (0);
}
