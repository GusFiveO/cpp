/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:19:24 by alorain           #+#    #+#             */
/*   Updated: 2022/07/06 19:03:08 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	private:
	public:
		WrongCat(void);
		WrongCat(const WrongCat & copy);
		const WrongCat & operator=(const WrongCat & assign);
		void makeSound(void) const;
};

#endif
