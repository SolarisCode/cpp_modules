/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:49:05 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/22 20:23:38 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RPN.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Usage => ./RPN <Expersion between qoutes>\n";
		return (0);
	}
	RPN rpn;
	rpn.execute_operation(argv[1]);
	return (0);
}
