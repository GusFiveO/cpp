/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:46 by alorain           #+#    #+#             */
/*   Updated: 2022/06/24 19:56:19 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
 
# include <iostream>
# include <cmath>

class Fixed
{
   public:
      Fixed();
      Fixed(int const nb);
      Fixed(float const nb);
      Fixed(Fixed const & src);
      ~Fixed();
	  float toFloat(void)const;
	  int toInt(void)const;
   private:
   		float	nb;
		static const int nbBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif // FIXED_H

