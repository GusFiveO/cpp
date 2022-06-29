/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:39 by alorain           #+#    #+#             */
/*   Updated: 2022/06/29 17:26:33 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
 
Fixed::Fixed(void) : nb(0){
//	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src) {
	//std::cout << "Fixed copy constructor called" << std::endl;
	this->nb = src.nb;
}

Fixed::Fixed(float n) {
//	std::cout << "Float constructor called" << std::endl;
	this->nb = roundf(n * (1 << this->nbBits));
}

Fixed::Fixed(int n) {
//	std::cout << "Float constructor called" << std::endl;
	this->nb = n * (1 << this->nbBits);
}

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat(void) const {
	return (this->nb / (1 << this->nbBits));
}

int Fixed::toInt(void) const {
	return ((int)this->nb / (1 << this->nbBits));
}

Fixed & Fixed::min(Fixed & f1, Fixed & f2) {
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

Fixed const & Fixed::min(Fixed const & f1, Fixed const & f2) {
	if (f1.toFloat() < f2.toFloat())
		return (f1);
	return (f2);
}

Fixed & Fixed::max(Fixed & f1, Fixed & f2) {
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}

int	Fixed::getRawBits(void) const {
	return (nb);
}

void Fixed::setRawBits(float n) {
	this->nb = roundf(n * (1 << this->nbBits));
}

Fixed const & Fixed::max(Fixed const & f1, Fixed const & f2) {
	if (f1.toFloat() > f2.toFloat())
		return (f1);
	return (f2);
}

std::ostream & operator<<(std::ostream & o, Fixed const & i) {
	o << i.toFloat();
	return (o);
}

Fixed & Fixed::operator=(const Fixed & rhs) {
	this->nb = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const & rhs) const {
	if (this->toFloat() > rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator<(Fixed const & rhs) const {
	if (this->toFloat() < rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator>=(Fixed const & rhs) const {
	if (this->toFloat() >= rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator<=(Fixed const & rhs) const {
	if (this->toFloat() <= rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator==(Fixed const & rhs) const {
	if (this->toFloat() == rhs.toFloat())
		return true;
	return false;
}

bool Fixed::operator!=(Fixed const & rhs) const {
	if (this->toFloat() != rhs.toFloat())
		return true;
	return false;
}

Fixed Fixed::operator/=(const Fixed & rhs) {
	this->setRawBits(this->toFloat() / rhs.toFloat());
	return *this;
}

Fixed Fixed::operator*(Fixed const & rhs) const {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed Fixed::operator+(Fixed const & rhs) const {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs) const {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed & Fixed::operator++(void) {
	this->nb++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp = *this;
	//++*this;
	operator++();
	return temp;
}
