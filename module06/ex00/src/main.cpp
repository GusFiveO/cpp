/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:31 by alorain           #+#    #+#             */
/*   Updated: 2022/07/13 18:39:39 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

void	printChar(std::string arg) {
	char c = static_cast<char>(std::atoi(arg.data()));

	if (arg.length() == 1)
		std::cout << "char: " << arg << std::endl;
	else if (!std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
}

void	printInt(std::string arg) {
	int n = static_cast<int>(std::atoi(arg.data()));

	if (arg.length() == 1 && !std::isdigit(arg[0]))
		std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
	else
		std::cout << "int: " << n << std::endl;
}

void	printFloat(std::string arg) {
	float f = static_cast<float>(std::atof(arg.data()));

	if (arg.length() == 1)
	{
		if(!std::isdigit(arg[0]))
			std::cout << "float: " << static_cast<int>(arg[0]) << ".0";
		else
			std::cout << "float: " << f << ".0";
	}
	else
		std::cout << "float: " << f;
	std::cout << "f" << std::endl;
}

void	printDouble(std::string arg) {
	double d;

	std::string data(arg);
	std::stringstream ss(data);
	ss >> d;
	if (arg.length() == 1)
	{
		if(!std::isdigit(arg[0]))
			std::cout << "double: " << static_cast<int>(arg[0]) << ".0" << std::endl;
		else
			std::cout << "double: " << d << ".0" << std::endl;
	}
	else
		std::cout << "double: " << d << std::endl;
}

int main(int argc, char **argv) {
	std::string arg;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::cout << "arg: " << argv[1] << std::endl;
	arg = argv[1];
	printChar(arg);
	printInt(arg);
	printFloat(arg);
	printDouble(arg);
}
