/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:17:30 by alorain           #+#    #+#             */
/*   Updated: 2022/07/06 18:52:12 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	this->_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog & copy) : Animal(copy){
	this->_type = copy._type;
	std::cout << "Dog parameterized constructor called" << std::endl;
}

const Dog & Dog::operator=(const Dog & assign) {
	this->_type = assign._type;
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Barking" << std::endl;
}
