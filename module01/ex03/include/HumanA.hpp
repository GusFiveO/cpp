/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:03:40 by alorain           #+#    #+#             */
/*   Updated: 2022/05/04 12:01:41 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA {
	private:
		std::string _name;
		Weapon& _weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA( void );

		void attack( void );

};

#endif
