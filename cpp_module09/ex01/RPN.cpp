/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:48:44 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/22 20:46:54 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

void	RPN::execute_operation(char* expr)
{
	double		operand_1, operand_2;
	int			i;
	char		num;
	if (!expr)
	{
		std::cout << "ERROR\n";
		return ;
	}
	i = 0;
	while (expr[i])
	{
		if (expr[i] == ' ')
			++i;
		else if (expr[i] && isdigit(expr[i]))
		{
			num = expr[i];
			this->result.push(std::atoi(&num));
			++i;
			if (isdigit(expr[i]))
			{
				std::cout << "ERROR\n";
				return ;
			}
		}
		else if (expr[i] && this->is_operation(expr[i]))
		{
			if (this->result.size() >= 2)
			{
				operand_1 = this->result.top();
				this->result.pop();
				operand_2 = this->result.top();
				this->result.pop();
				this->operate(operand_1, operand_2, expr[i]);
			}
			else
			{
				std::cout << "ERROR\n";
				return ;
			}
			++i;
		}
		else
		{
			std::cout << "ERROR\n";
			return ;
		}
	}
	i--;
	while (expr[i] == ' ')
		i--;
	if (!is_operation(expr[i]))
		std::cout << "Error\n";
	else
		std::cout << this->result.top() << "\n";
}

bool	RPN::is_operation(char c)
{
	if (c == '-' || c == '+')
		return true;
	if (c == '*' || c == '/')
		return true;
	return false;
}

void RPN::operate(double op1, double op2, char opt)
{
	double tmp_result;

	if (opt == '+')
		tmp_result = op1 + op2;
	else if (opt == '-')
		tmp_result = op2 - op1;
	else if (opt == '/')
		tmp_result = op2 / op1;
	else if (opt == '*')
		tmp_result = op1 * op2;
	this->result.push(tmp_result);
}
