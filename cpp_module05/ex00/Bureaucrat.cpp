/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:02:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/08/24 21:05:39 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"
#include <string>

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150){
	return;
}

Bureaucrat::Bureaucrat(int grade): _name("Bureaucrat") {
	if (grade < 1) {
		throw GradeTooHighException("Bureaucrat");
		return;
	}
	if (grade > 150) {
		throw GradeTooLowException("Bureaucrat");
		return;
	}
	this->_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _name(src.getName()){
	*this = src;
	return;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const& rhs) {
	if (this != &rhs) {
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void) {
	if (!(this->_grade - 1)) {
		throw GradeTooHighException("Bureaucrat");
		return;
	}
	this->_grade--;
	return;
}

void	Bureaucrat::decrementGrade(void) {
	if ((this->_grade + 1) > 150) {
		throw GradeTooLowException("Bureaucrat");
		return;
	}
	this->_grade++;
	return;
}

Bureaucrat::~Bureaucrat(void) {
	return;
}

std::ostream&	operator<<(std::ostream& OST, Bureaucrat const& obj) {
	OST << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (OST);
}
