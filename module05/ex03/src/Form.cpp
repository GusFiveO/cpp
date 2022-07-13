/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:28:21 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 17:47:20 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : 
	_name("Default"), 
	_sign(false), 
	_gradeToSign(150), 
	_gradeToExec(150){
	std::cout << "Default Form constructor called" << std::endl;
}

Form::Form(std::string name, unsigned int gradeToSign, unsigned int gradeToExec) : _name(name) {
	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooLowException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooHighException();
	else
	{
		this->_gradeToSign = gradeToSign;
		this->_gradeToExec = gradeToExec;
	}
	std::cout << "Parameterized Form constructor called" << std::endl;
}

Form::Form(const Form & copy) :
	_name(copy._name),
	_sign(copy._sign),
	_gradeToSign(copy._gradeToSign),
	_gradeToExec(copy._gradeToExec){
	std::cout << "Copy Form constructor called" << std::endl;
}

Form::~Form(void) {
	std::cout << "Default Form destructor called" << std::endl;
}

Form & Form::operator=(Form & assign) {
	this->_gradeToSign = assign._gradeToSign;
	this->_gradeToExec = assign._gradeToExec;
	return *this;
}

std::string Form::getName(void) const {
	return this->_name;
}

unsigned int Form::getGradeToSign(void) const {
	return this->_gradeToSign;
}

unsigned int Form::getGradeToExec(void) const {
	return this->_gradeToExec;
}

bool Form::isSign(void) const {
	return this->_sign;
}

void Form::beSigned(Bureaucrat & b) {
	if (this->_gradeToSign < b.getGrade())
		throw Form::GradeTooLowException();
	else
		this->_sign = true;
}

std::ostream & operator<<(std::ostream & o, const Form & rhs) {
	o << rhs.getName() << ", Form grad to sign is " << rhs.getGradeToSign() << ", to exec is " << rhs.getGradeToExec();
	if (rhs.isSign())
		o << "and it is signed";
	else
		o << "and it is not signed";
	return o;
}
