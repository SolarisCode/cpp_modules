/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:46:46 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/14 13:41:13 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <exception>
#ifndef BUREAUCRAT_CLASS
#define BUREAUCRAT_CLASS
#include <iostream>
#include <string>

class	Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& src);
	Bureaucrat&	operator=(Bureaucrat const& rhs);
	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(void);
	void		decrementGrade(void);
	class	GradeTooHighException: public std::exception
	{
	public:
		virtual const char *what() const throw ();
	};
	class	GradeTooLowException: public std::exception
	{
	public:
		virtual const char *what() const throw ();
	};
	~Bureaucrat(void);

private:
	const std::string	_name;
	int					_grade;
};

std::ostream&	operator<<(std::ostream& OST, Bureaucrat const& obj);

#endif
