/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:24 by alorain           #+#    #+#             */
/*   Updated: 2022/07/06 18:50:18 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"

class Cat : public Animal {
	private:
	public:
		Cat(void);
		Cat(const Cat & copy);
		const Cat & operator=(const Cat & assign);
		void makeSound(void) const;
};

#endif
