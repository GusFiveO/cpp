/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:30:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 19:59:58 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : _name("default") {
	this->_sign = false;
	this->_gradeToSign = 72;
	this->_gradeToExec = 45;
	std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : _name(name){
	this->_sign = false;
	this->_gradeToSign = 72;
	this->_gradeToExec = 45;
	std::cout << "Parameterized RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & copy) : _name(copy._name) {
	this->_sign = copy._sign;
	this->_gradeToSign = copy._gradeToSign;
	this->_gradeToExec = copy._gradeToExec;
	std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "Default RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::executeForm(const Bureaucrat & executor) const {
	if (executor.getGrade() > this->_gradeToExec)
		throw RobotomyRequestForm::GradeTooLowForExecException();
	std::cout << "BRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
	std::cout << executor.getName() << " has been robotized successfully 50\% of the time" << std::endl;
}

void RobotomyRequestForm::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->_gradeToSign)
		throw RobotomyRequestForm::GradeTooLowForSignException();
	b.signForm(*this);
}
