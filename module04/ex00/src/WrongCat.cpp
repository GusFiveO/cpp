/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:17:38 by alorain           #+#    #+#             */
/*   Updated: 2022/07/06 19:05:33 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	this->_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & copy) : WrongAnimal(copy){
	this->_type = copy._type;
	std::cout << "WrongCat parameterized constructor called" << std::endl;
}

const WrongCat & WrongCat::operator=(const WrongCat & assign) {
	this->_type = assign._type;
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "Meowing" << std::endl;
}
