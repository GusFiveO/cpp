/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:28:20 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 15:14:37 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
	std::string buff;
	std::string input;
	std::string add ("ADD");
	std::string search ("SEARCH");
	std::string exit ("EXIT");
	PhoneBook Book;

	(void)argv;
	if (argc != 1)
	{
		std::cout << "Too much args !" << std::endl; 
		return 0;
	}
	while (std::cin)
	{
		std::getline(std::cin, buff);
		input = buff;
		if (input.compare(add) == 0)
			Book.AddContact();
		else if (input.compare(search) == 0)
			Book.SearchContact();
		else if (input.compare(exit) == 0)
			return 0;
	}

	return 0;
}
