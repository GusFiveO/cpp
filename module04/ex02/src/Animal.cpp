/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:00:58 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 12:36:16 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal(void) : _type("Default") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : _type(type) {
	std::cout << "AAnimal parameterized constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal & copy) : _type(copy._type) {
	std::cout << "AAnimal parameterized constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "Default destructor called" << std::endl;
}

const AAnimal & AAnimal::operator=(const AAnimal & assign) {
	this->_type = assign._type;
	return *this;
}

void AAnimal::makeSound(void) const {
	std::cout << "AAnimal sound" << std::endl;
}

std::string AAnimal::getType(void) const {
	return this->_type;
}
