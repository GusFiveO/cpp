/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:20:19 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 14:42:29 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) {
	this->_type = "none";
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const AMateria & copy) {
	this->_type = copy.type;	
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria(void) {
	std::cout << "AMateria default destructor called" << std::endl;
}

std::string AMateria::getType(void) const {
	return this->_type;
}

void AMateria use(ICharacter & target) {
	if (this->type == "ice")
		std::cout << "* shoots an ice ball at " << target.getName() + " *" << std::endl;
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() + "'s wonds *" << std::endl;
}
