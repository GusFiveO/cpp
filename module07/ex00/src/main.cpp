/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:20:48 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/15 18:31:01 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "template.hpp"
#include <iostream>

int main (void) {
	//int intA = 21;
	//int intB = 42;
	//float floatA = 21;
	//float floatB = 42;
	//double doubleA = 21;
	//double doubleB = 42;

	//swap<int>(&intA, &intB);
	//std::cout << "max de a: " << intA << " et b: " << intB << " est :" << max<int>(intA, intB) << std::endl;
	//std::cout << "min de a: " << intA << " et b: " << intB << " est :" << min<int>(intA, intB) << std::endl;
	//swap<float>(&floatA, &floatB);
	//std::cout << "max de a: " << floatA << " et b: " << floatB << " est :" << max<float>(floatA, floatB) << std::endl;
	//std::cout << "min de a: " << floatA << " et b: " << floatB << " est :" << min<float>(floatA, floatB) << std::endl;
	//swap<double>(&doubleA, &doubleB);
	//std::cout << "max de a: " << doubleA << " et b: " << doubleB << " est :" << max<double>(doubleA, doubleB) << std::endl;
	//std::cout << "min de a: " << doubleA << " et b: " << doubleB << " est :" << min<double>(doubleA, doubleB) << std::endl;
	//return 0;
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
