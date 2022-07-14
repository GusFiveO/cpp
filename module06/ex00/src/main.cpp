/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:31 by alorain           #+#    #+#             */
/*   Updated: 2022/07/14 16:01:39 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

//TODO faire les limites tout ca -inff, +inff et nanf -inf, +inf et nan

bool isPseudoLiteral(std::string arg)
{
	std::string pseudoLiteralTab[6] = {"-inff", "+inff", "-inf", "+inf", "nan", "nanf"};

	for (int i = 0; i < 6; i++)
		if (arg == pseudoLiteralTab[i])
			return true;
	return false;
}

void	printChar(std::string arg) {
	char c = static_cast<char>(std::atoi(arg.data()));

	if (isPseudoLiteral(arg))
		std::cout << "char: impossible " << std::endl;
	else if (!std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
}

void	printInt(std::string arg) {
	int n = static_cast<int>(std::atoi(arg.data()));

	if (isPseudoLiteral(arg))
		std::cout << "int: impossible " << std::endl;
	else if (isPseudoLiteral(arg))
		std::cout << "char: impossible " << std::endl;
	else if (arg.length() == 1 && !std::isdigit(arg[0]))
		std::cout << "int: " << static_cast<int>(arg[0]) << std::endl;
	else
		std::cout << "int: " << n << std::endl;
}

void	printFloat(std::string arg) {
	float	f = static_cast<float>(std::atof(arg.c_str()));
	bool	dot = false;
	bool	decimal = false;

	for (size_t i = 0; i < arg.length(); i++)
	{
		if (arg[i] == '.')
			dot = true;
		if (dot && isdigit(arg[i]) && arg[i] != '0')
			decimal = true;
	}
	if (arg.length() == 1)
	{
		if(!std::isdigit(arg[0]))
			std::cout << "float: " << static_cast<int>(arg[0]) << ".0";
		else
			std::cout << "float: " << f << ".0";
	}
	else
		std::cout << "float: " << f;
	if (dot && !decimal)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
}

void	printDouble(std::string arg) {
	double	d = static_cast<double>(std::atof(arg.c_str()));
	bool	dot = false;
	bool	decimal = false;

	for (size_t i = 0; i < arg.length(); i++)
	{
		if (arg[i] == '.')
			dot = true;
		if (dot && isdigit(arg[i]) && arg[i] != '0')
			decimal = true;
	}
	if (arg.length() == 1)
	{
		if(!std::isdigit(arg[0]))
			std::cout << "double: " << static_cast<int>(arg[0]) << ".0" << std::endl;
		else
			std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
			std::cout << "double: " << d;
		if (dot && !decimal)
			std::cout << ".0" << std::endl;
		else
			std::cout << std::endl;
	}
}

int main(int argc, char **argv) {
	std::string arg;

	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	//std::cout << "arg: " << argv[1] << std::endl;
	arg = argv[1];
	printChar(arg);
	printInt(arg);
	printFloat(arg);
	printDouble(arg);
}
