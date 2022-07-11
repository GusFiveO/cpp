/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:13:18 by alorain           #+#    #+#             */
/*   Updated: 2022/07/11 19:34:01 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria ** _materia;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource & copy);
		virtual ~MateriaSource(void);
		virtual void learnMateria(AMateria * m);
		virtual AMateria * createMateria(const std::string & type);
};

#endif
