/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/20 14:21:22 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "max(a, b): " << Fixed::max( a, b ) << std::endl;
	Fixed lol(5.0f);
	std::cout << "lol: " << lol << std::endl;
	std::cout << "b/lol: " << b / lol << std::endl;
	std::cout << "b < lol: " ;
	if (b < lol)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "b == lol: " ;
	if (b == lol)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "b != lol: " ;
	if (b != lol)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::cout << "lol + b: " << lol + b << std::endl;
	std::cout << "lol - b: " << lol - b << std::endl;
	std::cout << "lol * b: " << lol * b << std::endl;
	return 0;
}
