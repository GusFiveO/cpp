/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:27 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 20:17:23 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	Bureaucrat remi("remi", 1);
	try{
	ShrubberyCreationForm arbre("arbre");
	arbre.executeForm(remi);
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try{
	RobotomyRequestForm robot("robot");
	robot.executeForm(remi);
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try{
	PresidentialPardonForm president("president");
	president.executeForm(remi);
	}catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
