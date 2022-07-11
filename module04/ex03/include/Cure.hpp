/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 12:50:05 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 19:26:48 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria {
	protected :
	public :
		Cure(void);
		Cure(const Cure & copy);
		Cure(AMateria & copy);
		~Cure(void);
		std::string const & getType(void) const;

		virtual Cure * clone(void) const;
		virtual void use(ICharacter & target);
};

#endif
