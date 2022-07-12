/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:28:21 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 16:44:50 by alorain          ###   ########.fr       */
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
	std::cout << "Copy Bureaucrat constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void) {
	std::cout << "Default Bureaucrat destructor called" << std::endl;
}

const Bureaucrat & Bureaucrat::operator=(const Bureaucrat & assign) {
	this->_grade = assign._grade;
	return *this;
}

std::string Bureaucrat::getName(void) const {
	return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void Bureaucrat::signForm(Form & form) {
	try {form.beSigned(*this);}
	catch (std::exception & e){
		std::cout << this->_name << " can't sign " << form.getName() << " because his grade is too low" << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
}

std::ostream & operator<<(std::ostream & o, const Bureaucrat & rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}
