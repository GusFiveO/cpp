/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:37 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 12:20:28 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"

class Dog : public Animal {
	private:
	public:
		Dog(void);
		Dog(const Dog & copy);
		~Dog(void);
		const Dog & operator=(const Dog & assign);
		void makeSound(void) const;
};

#endif
