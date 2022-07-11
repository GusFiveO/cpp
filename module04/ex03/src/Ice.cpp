/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 14:20:19 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 20:22:02 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) {
	this->_type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(AMateria & copy) {
	//std::string type("ice");
	//copy.setType(type);
	//*this = copy;
	(void)copy;
	this->_type = "ice";
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::Ice(const Ice & copy) {
	this->_type = "ice";
	(void)copy;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice(void) {
	std::cout << "Ice default destructor called" << std::endl;
}

std::string const & Ice::getType(void) const {
	return this->_type;
}

Ice * Ice::clone(void) const {
	Ice * iceClone = new Ice();
	return iceClone;
}

void Ice::use(ICharacter & target) {
	if (this->_type == "ice")
		std::cout << "* shoots an ice ball at " << target.getName() + " *" << std::endl;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() + "'s wonds *" << std::endl;
}
