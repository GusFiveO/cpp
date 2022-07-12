/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:30:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 20:03:06 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _name("default") {
	this->_sign = false;
	this->_gradeToSign = 145;
	this->_gradeToExec = 137;
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : _name(name){
	this->_sign = false;
	this->_gradeToSign = 145;
	this->_gradeToExec = 137;
	std::cout << "Parameterized ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm & copy) : _name(copy._name) {
	this->_sign = copy._sign;
	this->_gradeToSign = copy._gradeToSign;
	this->_gradeToExec = copy._gradeToExec;
	std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "Default ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::executeForm(const Bureaucrat & executor) const {
	if (executor.getGrade() > this->_gradeToExec)
		throw ShrubberyCreationForm::GradeTooLowForExecException();
	std::string fileName = executor.getName() + "_shrubbery";
	std::ofstream newFile(fileName.data());
	newFile <<  "des arbres en ASCII" << std::endl;
}

void ShrubberyCreationForm::beSigned(Bureaucrat & b) {
	if (b.getGrade() > this->_gradeToSign)
		throw ShrubberyCreationForm::GradeTooLowForSignException();
	b.signForm(*this);
}
