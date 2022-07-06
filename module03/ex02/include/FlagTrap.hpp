/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:45:31 by alorain           #+#    #+#             */
/*   Updated: 2022/07/05 17:31:44 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap : public ClapTrap {
	private :
	public :
		FlagTrap(void);
		FlagTrap(std::string name);
		FlagTrap(const FlagTrap & copy);
		~FlagTrap(void);
		void highFivesGuys(void) const;
		const FlagTrap & operator=(const FlagTrap & assign);

};

#endif
