/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:51:54 by alorain           #+#    #+#             */
/*   Updated: 2022/06/08 15:07:49 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*func)(void);

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void Harl::warning( void ) {
	std::cout << "[WARNING]"<< std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::debug( void ) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info( void ) {
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::defaultMethod( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::complain(std::string level) {
	std::string	tabName[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "DEFAULT"};

	for (int i = 0; i < 5; i++) {
		if (level == tabName[i] || i == 4) {
			switch (i) {
				case 0:
					debug();
					__attribute__((fallthrough));
					/* fall through */
				case 1:
					info();
					__attribute__((fallthrough));
					/* fall through */
				case 2: 
					warning();
					__attribute__((fallthrough));
					/* fall through */
				case 3:
					error();
					return;
				default:
					defaultMethod();
					return;
			}
		}
	}
	return ;
}
