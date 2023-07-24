/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:46:46 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/24 18:39:15 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS
#include <iostream>
#include <string>

class	Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(int grade);
	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(void);
	void		decrementGrade(void);
	~Bureaucrat(void);

private:
	const std::string	_name;
	int					_grade;

};

std::ostream&	operator<<(std::ostream& OST, Bureaucrat const& obj);

#endif
