/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:03:40 by alorain           #+#    #+#             */
/*   Updated: 2022/07/21 20:16:58 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMBNB_HPP
# define HUMBNB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB(std::string name ,Weapon weapon);
		HumanB(std::string name);
		~HumanB( void );

		void attack( void );
		void setWeapon(Weapon &weapon);
};

#endif
