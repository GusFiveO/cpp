/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:24 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 17:34:15 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain * _brain;
	public:
		Cat(void);
		Cat(const Cat & copy);
		virtual ~Cat(void);
		const Cat & operator=(const Cat & assign);
		void makeSound(void) const;
		void addIdea(std::string idea);
		void printIdeas(void);
};

#endif
