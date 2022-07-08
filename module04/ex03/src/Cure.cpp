/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:20:19 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 14:54:02 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) {
	this->_type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure & copy) {
	this->_type = "cure";
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure(void) {
	std::cout << "Cure default destructor called" << std::endl;
}

std::string Cure::getType(void) const {
	return this->_type;
}

AMateria * Cure::clone(void) const {
	AMateria * cureClone = new Ice();
	return cureClone;
}

//void Cure use(ICharacter & target) {
//	if (this->type == "ice")
//		std::cout << "* shoots an ice ball at " << target.getName() + " *" << std::endl;
//	else if (this->type == "cure")
//		std::cout << "* heals " << target.getName() + "'s wonds *" << std::endl;
//}
