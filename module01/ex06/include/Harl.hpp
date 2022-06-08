/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:48:19 by alorain           #+#    #+#             */
/*   Updated: 2022/06/08 14:51:10 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl {
	public:
		Harl( void );
		~Harl( void );
		void complain(std::string level);
	private:
		void warning( void );
		void debug( void );
		void info( void );
		void error( void );
		void defaultMethod( void );
};

#endif
