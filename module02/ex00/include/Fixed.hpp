/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:46 by alorain           #+#    #+#             */
/*   Updated: 2022/06/24 18:54:39 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
 
# include <iostream>

class Fixed
{
   public:
      Fixed();
      Fixed(Fixed const & src);
      ~Fixed();
	  int getRawBits(void) const;
	  void setRawBits(int nb);
	  Fixed & operator=(Fixed const & rhs);
   private:
   		int	nb;
		static const int nbBits = 8;
};
#endif // FIXED_H

