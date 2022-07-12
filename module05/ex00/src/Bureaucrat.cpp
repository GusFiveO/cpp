/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:28:21 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 15:06:08 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Default"), _grade(150){
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) : _name(copy._name), _grade(copy._grade){
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Default Bureaucrat destructor called" << std::endl;
}

const Bureaucrat & Bureaucrat::operator=(const Bureaucrat & assign) {
	this->_grade = assign._grade;
	this->_name = assign._name;
	return *this;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}
