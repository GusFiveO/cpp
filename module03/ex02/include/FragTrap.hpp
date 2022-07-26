/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <alorain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 16:45:31 by alorain           #+#    #+#             */
/*   Updated: 2022/07/26 16:50:25 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private :
	public :
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap & copy);
		~FragTrap(void);
		void highFivesGuys(void) const;
		const FragTrap & operator=(const FragTrap & assign);

};

#endif
