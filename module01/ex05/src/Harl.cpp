/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:51:54 by alorain           #+#    #+#             */
/*   Updated: 2022/06/08 14:32:51 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

typedef void (Harl::*func)(void);

Harl::Harl( void ) {}

Harl::~Harl( void ) {}

void Harl::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
	std::string	tabName[4] = {"WARNING", "ERROR", "INFO", "DEBUG"};
	func	tabFunc[4] = {&Harl::warning, &Harl::error, &Harl::info, &Harl::debug};

	for (int i = 0; i < 4; i++) {
		if (!level.compare(tabName[i])) {
			(this->*tabFunc[i])();
			return ;
		}
	}
	std::cout << "Level doesn't exist." << std::endl;
	return ;
}
