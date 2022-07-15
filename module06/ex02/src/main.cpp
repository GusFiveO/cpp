/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:49:30 by alorain           #+#    #+#             */
/*   Updated: 2022/07/15 16:08:46 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <time.h>

Base *generate(void)
{
	int	randNum = rand() % 3;
	switch (randNum)
	{
		case 0:
		{
			Base * a = new A();
			return a;
		}
		case 1:
		{
			Base * b = new B();
			return b;
		}
		case 2:
		{
			Base * c = new C();
			return c;
		}
	}
	return NULL;
}

bool isClass(Base & ptr, char base)
{
	if (base == 'A')
	{
		try
		{
			Base &temp = dynamic_cast<A&>(ptr);
			(void)temp;
		}
		catch (std::bad_cast & e)
		{
			return false;
		}
	}
	else if (base == 'B')
	{
		try
		{
			Base &temp = dynamic_cast<B&>(ptr);
			(void)temp;
		}
		catch (std::bad_cast & e)
		{
			return false;
		}
	}
	else if (base == 'C')
	{
		try
		{
			Base &temp = dynamic_cast<C&>(ptr);
			(void)temp;
		}
		catch (std::bad_cast & e)
		{
			return false;
		}
	}
	return true;
}

void identify(Base & p)
{
	if (isClass(p, 'A'))
			std::cout << "A" << std::endl;
	else if (isClass(p, 'B'))
			std::cout << "B" << std::endl;
	else if (isClass(p, 'C'))
			std::cout << "C" << std::endl;
}

bool isClass(Base * ptr, char base)
{
	Base * temp;
	if (base == 'A')
	{
		temp = dynamic_cast<A*>(ptr);
		if (!temp)
			return false;
	}
	else if (base == 'B')
	{
		temp = dynamic_cast<B*>(ptr);
		if (!temp)
			return false;
	}
	else if (base == 'C')
	{
		temp = dynamic_cast<C*>(ptr);
		if (!temp)
			return false;
	}
	return true;
}

void identify(Base * p)
{
	if (isClass(p, 'A'))
			std::cout << "A" << std::endl;
	else if (isClass(p, 'B'))
			std::cout << "B" << std::endl;
	else if (isClass(p, 'C'))
			std::cout << "C" << std::endl;
}

int main (void) {
	srand(time(0));
	Base * randClass = generate();
	Base & ref = *randClass;
	identify(randClass);
	identify(ref);
	delete randClass;
}
