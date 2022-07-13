/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:20:16 by alorain           #+#    #+#             */
/*   Updated: 2022/07/13 13:11:20 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {
	std::cout << "Default Intern constructor called" << std::endl;
}

Intern::~Intern(void) {
	std::cout << "Default Intern destructor called" << std::endl;
}

Form * Intern::makeForm(std::string name, std::string target) {
 	std::string formTab[3] = {"presidential pardon", "shrubbery creation", "robotomy request"};
	for (int i = 0; i < 3; i++)
	{
		if (name == formTab[i])
		{
			switch (i)
			{
				case 0:
				{
					std::cout << "Intern create " << name << std::endl;
					return new PresidentialPardonForm(target);
				}
				case 1:
				{
					std::cout << "Intern create " << name << std::endl;
					return new ShrubberyCreationForm(target);
				}
				case 2:
				{
					std::cout << "Intern create " << name << std::endl;
					return new RobotomyRequestForm(target);
				}
			}
		}
	}
	std::cout << "This kind of Form does not exist" << std::endl;
	return NULL;
}
