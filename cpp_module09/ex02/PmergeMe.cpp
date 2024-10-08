/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:51:00 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/22 22:44:08 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
}

PmergeMe::~PmergeMe(void)
{
}

void	PmergeMe::merge_me(char** args, int len)
{
	int i = 1, tmp, j, index;
	this->_size = len;
	float bench_vec, bench_deq;

	while (args[i])
	{
		j = 0;
		if (args[i][0] == '\0')
		{
			std::cout << "Error: Bad input\n";
			return ;
		}
		while (args[i][j])
		{
			if (!isdigit(args[i][j]))
			{
				std::cout << "Error: Bad input\n";
				return ;
			}
			j++;
		}
		index = -1;
		while (args[++index])
			if (i != index && !strcmp(args[i], args[index]))
			{
				std::cout << "Error: Bad input (Duplication)\n";
				return ;
			}
		std::stringstream ss(args[i]);
		ss >> tmp;
		if (tmp < 0)
		{
			std::cout << "ERROR\n";
			return ;
		}
		this->_vec.push_back(tmp);
		this->_deq.push_back(tmp);
		i++;
	}
	clock_t start = clock();
	merge_insert_sort(this->_vec);
	bench_vec = (float)(clock() - start);

	start = clock();
	merge_insert_sort(this->_deq);
	bench_deq = (float)(clock() - start);
	i = 1;
	std::cout << "Before: ";
	while (args[i])
	{
		std::cout << args[i] << " ";
		++i;
	}
	std::cout << tmp << "\n";
	std::cout << "After: " ;
	for (size_t i = 0; i < _vec.size(); ++i)
	{
		std::cout << _vec[i] << " ";
	}
	std::cout << "\n";
	std::cout << "Time to process a range of " << _vec.size() <<" elements with std::vector " << bench_vec << " clicks\n";
	std::cout << "Time to process a range of " << _deq.size() <<" elements with std::deque " << bench_deq << " clicks\n";
}
