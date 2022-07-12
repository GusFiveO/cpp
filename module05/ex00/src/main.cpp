/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:27 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 15:05:51 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try {Bureaucrat remi("remi", 0);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {Bureaucrat remi("remi", 151);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try {Bureaucrat remi("remi", 28);
	std::cout << remi << std::endl;}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
