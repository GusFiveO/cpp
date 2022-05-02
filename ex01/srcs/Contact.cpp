/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:37:04 by alorain           #+#    #+#             */
/*   Updated: 2022/05/02 19:01:34 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	this->Firstname.empty();
	this->Lastname.empty();
	this->Nickname.empty();
	this->PhoneNumber.empty();
	this->DarkestSecret.empty();
}

void	Contact::PrintFirstname(int formated)
{
	int i;

	i = 0;
	if (this->Firstname.length() > 10 && formated)
	{
		while (i < 9)
			std::cout << this->Firstname[i++];
		std::cout << ".";
	}
	else
	{
		if (formated)
			std::cout << std::setw(10);
		std::cout << this->Firstname;
	}
}

void	Contact::PrintLastname(int formated)
{
	int i;

	i = 0;
	if (this->Lastname.length() > 10 && formated)
	{
		while (i < 9)
			std::cout << this->Lastname[i++];
		std::cout << ".";
	}
	else
	{
		if (formated)
			std::cout << std::setw(10);
		std::cout << this->Lastname;
	}
}

void	Contact::PrintNickname(int formated)
{
	int i;

	i = 0;
	if (this->Nickname.length() > 10 && formated)
	{
		while (i < 9)
			std::cout << this->Nickname[i++];
		std::cout << ".";
	}
	else
	{
		if (formated)
			std::cout << std::setw(10);
		std::cout << this->Nickname;
	}
}

void	Contact::PrintPhoneNumber(int formated)
{
	int i;

	i = 0;
	if (this->PhoneNumber.length() > 10 && formated)
	{
		while (i < 9)
			std::cout << this->PhoneNumber[i++];
		std::cout << ".";
	}
	else
	{
		if (formated)
			std::cout << std::setw(10);
		std::cout << this->PhoneNumber;
	}
}

void	Contact::PrintDarkestSecret(int formated)
{
	int i;

	i = 0;
	if (this->DarkestSecret.length() > 10 && formated)
	{
		while (i < 9)
			std::cout << this->DarkestSecret[i++];
		std::cout << ".";
	}
	else
	{
		if (formated)
			std::cout << std::setw(10);
		std::cout << this->DarkestSecret;
	}
}

void	Contact::PrintInfo()
{
	if (!this->Firstname.empty())
	{
		std::cout << "First Name :";
		this->PrintFirstname(0);
		std::cout << std::endl; 
	}
	if (!this->Lastname.empty())
	{
		std::cout << "Last Name :";
		this->PrintLastname(0);
		std::cout << std::endl; 
	}
	if (!this->Nickname.empty())
	{
		std::cout << "Nick Name :";
		this->PrintNickname(0);
		std::cout << std::endl; 
	}
	if (!this->PhoneNumber.empty())
	{
		std::cout << "Phone Number:";
		this->PrintPhoneNumber(0);
		std::cout << std::endl; 
	}
	if (!this->DarkestSecret.empty())
	{
		std::cout << "Darkest Secret :";
		this->PrintDarkestSecret(0);
		std::cout << std::endl; 
	}
}

void	Contact::CreateContact()
{
	std::cout << "First Name :";
	std::getline(std::cin, this->Firstname);
	std::cout << "Last Name :";
	std::getline(std::cin, this->Lastname);
	std::cout << "Nick Name :";
	std::getline(std::cin, this->Nickname);
	std::cout << "Phone Number :";
	std::getline(std::cin, this->PhoneNumber);
	std::cout << "Darkest Secret :";
	std::getline(std::cin, this->DarkestSecret);
}
