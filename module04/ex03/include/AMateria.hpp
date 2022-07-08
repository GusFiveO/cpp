/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:50:05 by alorain           #+#    #+#             */
/*   Updated: 2022/07/08 14:24:15 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria {
	protected :
		std::string _type;
	public :
		AMateria(void);
		AMateria(const AMateria & copy);
		~AMAteria(void);
		std::string const & getType(void) const;

		virtual AMateria * clone(void) const = 0;
		virtual void use(ICharacter & target);
};

#endif
