/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:45:27 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 16:45:36 by alorain          ###   ########.fr       */
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
	try {Form lilForm("lil form", 0);}
	catch(std::exception & e){
		std::cout << e.what() << std::endl;
	}
		Bureaucrat remi("remi", 28);
		Form bigForm("big form", 1);
		Form lilForm("lil form", 28);
		remi.signForm(bigForm);
		remi.signForm(lilForm);
	return 0;
}
