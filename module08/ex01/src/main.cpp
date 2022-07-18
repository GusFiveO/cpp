/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:11:51 by alorain           #+#    #+#             */
/*   Updated: 2022/07/18 19:53:07 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
	
	//int tab[] = {87, 54, 7, 548 ,354};
	Span span(5);
	//std::vector<int> vect;
	//for (int i = 0; i < 5; i++)
	//	vect.push_back(tab[i]);
	//span.addNumbers(vect.begin(), vect.end());
	try
	{
		span.addNumber(42);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << span.longestSpan() << std::endl; 
		std::cout << span.shortestSpan() << std::endl; 
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		span.addNumber(42);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
