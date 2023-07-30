/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 21:48:44 by melkholy          #+#    #+#             */
/*   Updated: 2023/06/30 23:19:11 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

typedef std::string::iterator Iter;

void	convertStrToUpper(std::string& loudMessage) {
	for (Iter it = loudMessage.begin(); it != loudMessage.end(); it++) {
		*it = std::toupper(*it);
	}
}

int	main(int argc, char *argv[]) {
	int			count;
	std::string	loudMessage;

	count = 0;
	if (argc < 2) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int count = 1; argv[count]; count++) {
		loudMessage.append(argv[count]);
	}
	convertStrToUpper(loudMessage);
	std::cout << loudMessage << std::endl;
	return (0);
}
