/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:30:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 20:17:36 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : _name("default") {
	this->_sign = false;
	this->_gradeToSign = 25;
	this->_gradeToExec = 5;
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : _name(name){
	this->_sign = false;
	this->_gradeToSign = 25;
	this->_gradeToExec = 5;
	std::cout << "Parameterized PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & copy) : _name(copy._name) {
	this->_sign = copy._sign;
	this->_gradeToSign = copy._gradeToSign;
	this->_gradeToExec = copy._gradeToExec;
	std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "Default PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::executeForm(const Bureaucrat & executor) const {
	if (executor.getGrade() > this->_gradeToExec)
		throw PresidentialPardonForm::GradeTooLowForExecException();
	std::cout << executor.getName() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}

void PresidentialPardonForm::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->_gradeToSign)
		throw PresidentialPardonForm::GradeTooLowForSignException();
	b.signForm(*this);
}
