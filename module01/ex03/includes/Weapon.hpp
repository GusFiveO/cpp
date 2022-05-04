/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:53:44 by alorain           #+#    #+#             */
/*   Updated: 2022/05/04 11:23:21 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon(void);

		std::string const getType();
		void setType(std::string);
	private:
		std::string type;
};

#endif
