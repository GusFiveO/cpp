/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:50:05 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 20:04:57 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected :
		const std::string _type;
	public :
		AMateria(void);
		AMateria(const AMateria & copy);
		~AMateria(void);
		std::string const & getType(void) const;

		virtual AMateria * clone(void) const = 0;
		virtual void use(ICharacter & target);
};

#endif
