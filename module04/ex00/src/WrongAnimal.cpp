/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:00:58 by alorain           #+#    #+#             */
/*   Updated: 2022/07/06 19:05:08 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("Default") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & copy) : _type(copy._type) {
	std::cout << "WrongAnimal parameterized constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Default destructor called" << std::endl;
}

const WrongAnimal & WrongAnimal::operator=(const WrongAnimal & assign) {
	this->_type = assign._type;
	return *this;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->_type;
}
