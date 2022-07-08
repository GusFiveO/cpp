/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:20:19 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 14:53:40 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
	this->_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice & copy) {
	this->_type = "ice";
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void) {
	std::cout << "Ice default destructor called" << std::endl;
}

std::string Ice::getType(void) const {
	return this->_type;
}

AMateria * Ice::clone(void) const {
	AMateria * iceClone = new Ice();
	return iceClone;
}

//void Ice use(ICharacter & target) {
//	if (this->type == "ice")
//		std::cout << "* shoots an ice ball at " << target.getName() + " *" << std::endl;
//	else if (this->type == "cure")
//		std::cout << "* heals " << target.getName() + "'s wonds *" << std::endl;
//}
