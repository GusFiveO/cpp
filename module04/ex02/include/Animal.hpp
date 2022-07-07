/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:01:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 12:34:35 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal {
	protected :
		std::string _type;
	public :
		Animal(void);
		Animal(std::string type);
		Animal(const Animal & copy);
		virtual ~Animal(void);
		const Animal & operator=(const Animal & assign);
		virtual void makeSound(void) const;
		std::string getType(void) const;
};

#endif
