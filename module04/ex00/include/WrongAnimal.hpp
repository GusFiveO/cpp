/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 18:01:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 12:28:07 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {
	protected :
		std::string _type;
	public :
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal & copy);
		virtual ~WrongAnimal(void);
		const WrongAnimal & operator=(const WrongAnimal & assign);
		void makeSound(void) const;
		std::string getType(void) const;
};

#endif
