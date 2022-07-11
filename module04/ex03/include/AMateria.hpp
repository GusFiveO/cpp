/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:50:05 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 20:31:17 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected :
		std::string _type;
	public :
		AMateria(void);
		AMateria(const AMateria & copy);
		virtual ~AMateria(void);
		std::string const & getType(void) const;
		void setType(std::string & type);

		virtual AMateria * clone(void) const = 0;
		virtual void use(ICharacter & target);
};

#endif
