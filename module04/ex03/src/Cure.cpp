/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:20:19 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 20:22:46 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
	this->_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(AMateria & copy) {
	(void)copy;
	this->_type = "cure";
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::Cure(const Cure & copy) {
	(void)copy;
	this->_type = "cure";
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void) {
	std::cout << "Cure default destructor called" << std::endl;
}

const std::string & Cure::getType(void) const {
	return this->_type;
}

Cure * Cure::clone(void) const {
	Cure * cureClone = new Cure();
	return cureClone;
}

void Cure::use(ICharacter & target) {
	if (this->_type == "ice")
		std::cout << "* shoots an ice ball at " << target.getName() + " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() + "'s wonds *" << std::endl;
}
