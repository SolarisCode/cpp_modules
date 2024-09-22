/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:48:53 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/22 20:54:13 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <stack>
# include <sstream>
# include <cstdlib>
# include <cstring>
# include <exception>

class RPN
{
public:
	RPN(void);
	~RPN(void);
	void	execute_operation(char * expr);

private:
	std::stack<double> result;
	bool	is_operation(char c);
	void	operate(double op1, double op2, char opt);
};

#endif
