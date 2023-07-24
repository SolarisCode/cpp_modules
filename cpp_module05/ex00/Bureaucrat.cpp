/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 17:02:17 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/24 18:42:37 by melkholy         ###   ########.fr       */
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
		throw GradeTooHighException();
		return;
	}
	if (grade > 150) {
		throw GradeTooLowException();
		return;
	}
	this->_grade = grade;
	return;
}

std::string	Bureaucrat::getName(void) const {
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void) {
	if (!(this->_grade - 1)) {
		throw GradeTooHighException();
		return;
	}
	this->_grade--;
	return;
}

void	Bureaucrat::decrementGrade(void) {
	if ((this->_grade + 1) > 150) {
		throw GradeTooLowException();
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
