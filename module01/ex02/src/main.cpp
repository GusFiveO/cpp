/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:43:58 by alorain           #+#    #+#             */
/*   Updated: 2022/05/04 10:48:34 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( void )
{
	std::string	brain("HI THIS IS BRAIN");
	std::string *stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "STR:" << &brain << std::endl;
	std::cout << "PTR:" << stringPTR << std::endl;
	std::cout << "REF:" << &stringREF << std::endl << std::endl;

	std::cout << "STR:" << brain << std::endl;
	std::cout << "PTR:" << *stringPTR << std::endl;
	std::cout << "REF:" << stringREF << std::endl;
	return 0;
}
