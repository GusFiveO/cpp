/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:53:06 by alorain           #+#    #+#             */
/*   Updated: 2022/07/07 14:20:13 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
	protected :
		std::string *_ideas;
	public :
		Brain(void);
		Brain(const Brain & copy);
		~Brain(void);
		void addIdea(std::string idea);
		void printIdeas(void) const;
		const Brain & operator=(const Brain & assign);
};

#endif
