/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:00:58 by alorain           #+#    #+#             */
/*   Updated: 2022/07/06 18:51:30 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Default") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::Animal(const Animal & copy) : _type(copy._type) {
	std::cout << "Animal parameterized constructor called" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Default destructor called" << std::endl;
}

const Animal & Animal::operator=(const Animal & assign) {
	this->_type = assign._type;
	return *this;
}

void Animal::makeSound(void) const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType(void) const {
	return this->_type;
}
