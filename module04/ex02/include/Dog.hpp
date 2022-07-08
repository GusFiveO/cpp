/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:37 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 12:37:11 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	private:
		Brain * _brain;
	public:
		Dog(void);
		Dog(const Dog & copy);
		virtual ~Dog(void);
		const Dog & operator=(const Dog & assign);
		void makeSound(void) const;
		void addIdea(std::string idea);
		void printIdeas(void);
};

#endif
