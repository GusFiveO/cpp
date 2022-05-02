/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:37:10 by alorain           #+#    #+#             */
/*   Updated: 2022/05/02 19:00:23 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <cstddef>
#include <sstream>

PhoneBook::PhoneBook(void)
{
	this->i = 0;
}

void	PhoneBook::AddContact(void)
{
	if (this->i == 8)
		this->i = 0;
	ContactTab[this->i++].CreateContact();
}

void	PhoneBook::PrintContacts()
{
	int j;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name"
	<< "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nick Name" << "|" << std::endl; 
	std::cout << "---------------------------------------------" << std::endl;
	j = 0;
	while (j < 8)
	{
		std::cout << "|";
		std::cout << std::setw(10) << j;
		std::cout << "|";
		this->ContactTab[j].PrintFirstname(1);
		std::cout << "|"; 
		this->ContactTab[j].PrintLastname(1);
		std::cout << "|";
		this->ContactTab[j].PrintNickname(1);
		std::cout << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		j++;
	}
}

void	PhoneBook::SearchContact()
{
	int			i;
	int			tries;
	std::string input;

	i = 0;
	tries = 0;
	this->PrintContacts();
	while (tries < 3)
	{
		std::getline(std::cin, input);
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '9')
		{
			std::istringstream(input) >> i;
			this->ContactTab[i].PrintInfo();
			return ;
		}
		else
		{
			tries++;
			std::cout << "Please retry" << std::endl;
		}
	}
}
