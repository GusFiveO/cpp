/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:39 by alorain           #+#    #+#             */
/*   Updated: 2022/07/25 14:45:25 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
 
Fixed::Fixed(void) : nb(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	this->nb = src.nb;
}

Fixed::Fixed(float n) {
	std::cout << "Float constructor called" << std::endl;
	this->nb = roundf(n * (1 << this->nbBits));
}

Fixed::Fixed(int n) {
	std::cout << "Float constructor called" << std::endl;
	this->nb = n * (1 << this->nbBits);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return (this->nb / (1 << this->nbBits));
}

int Fixed::toInt(void) const {
	return ((int)this->nb / (1 << this->nbBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return (o);
}
