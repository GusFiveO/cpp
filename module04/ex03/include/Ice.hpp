/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:50:05 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 19:29:33 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "Character.hpp"
# include "AMateria.hpp"

class Ice : public AMateria {
	protected :
	public :
		Ice(void);
		Ice(AMateria & copy);
		Ice(const Ice & copy);
		~Ice(void);
		std::string const & getType(void) const;

		virtual Ice * clone(void) const;
		virtual void use(ICharacter & target);
};

#endif
