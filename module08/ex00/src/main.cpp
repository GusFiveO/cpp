/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:11:31 by alorain           #+#    #+#             */
/*   Updated: 2022/07/18 14:55:27 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
	std::vector<int> myvector;
	int ret;
	for (int i = 0; i < 6; i++)
		myvector.push_back(i);
	try
	{
		ret = easyfind(myvector, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "this nb is not part of the container" << std::endl;
		return 1;
	}
	std::cout << ret << std::endl;
	std::list<int> mylist;
	for (int i = 0; i < 6; i++)
		mylist.push_back(i);
	try
	{
		ret = easyfind(mylist, 4);
	}
	catch (std::exception &e)
	{
		std::cout << "this nb is not part of the container" << std::endl;
		return 1;
	}
	std::cout << ret << std::endl;
	std::deque<int> mydeque;
	for (int i = 0; i < 6; i++)
		mydeque.push_back(i);
	try
	{
		ret = easyfind(mydeque, 1);
	}
	catch (std::exception &e)
	{
		std::cout << "this nb is not part of the container" << std::endl;
		return 1;
	}
	std::cout << ret << std::endl;
	std::set<int> myset;
	for (int i = 0; i < 6; i++)
		myset.insert(i);
	try
	{
		ret = easyfind(myset, 6);
	}
	catch (std::exception &e)
	{
		std::cout << "this nb is not part of the container" << std::endl;
		return 1;
	}
	std::cout << ret << std::endl;
	return 0;
}
