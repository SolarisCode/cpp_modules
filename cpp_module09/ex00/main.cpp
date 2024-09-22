/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:47:52 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/22 18:11:58 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char*argv[])
{
	std::string db_path = "./data.csv";
	if (argc != 2)
	{
		std::cout << "Error: Usage ./btc <in_put_file>.\n";
		return (0);
	}
	BitcoinExchange btc;
	btc.display_values(db_path, argv[1]);

	return (0);
}
