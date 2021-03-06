/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:01:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 12:36:38 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class AAnimal {
	protected :
		std::string _type;
	public :
		AAnimal(void);
		AAnimal(std::string type);
		AAnimal(const AAnimal & copy);
		virtual ~AAnimal(void);
		const AAnimal & operator=(const AAnimal & assign);
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif
