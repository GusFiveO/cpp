/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:59:07 by alorain           #+#    #+#             */
/*   Updated: 2022/05/03 18:31:18 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		Zombie( void );
		~Zombie( void );
		void announce( void );
		void setName(std::string name);
	private:
		std::string name;
};


#endif
