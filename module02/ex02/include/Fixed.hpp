/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 14:19:46 by alorain           #+#    #+#             */
/*   Updated: 2022/06/27 18:58:48 by alorain          ###   ########.fr       */
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
	static Fixed & min(Fixed & f1, Fixed & f2);
	static Fixed const & min(Fixed const & f1, Fixed const & f2);
	static Fixed & max(Fixed & f1, Fixed & f2);
	static Fixed const & max(Fixed const & f1, Fixed const & f2);

	bool operator>(Fixed const & rhs) const;
	bool operator<(Fixed const & rhs) const;
	bool operator>=(Fixed const & rhs) const;
	bool operator<=(Fixed const & rhs) const;
	bool operator==(Fixed const & rhs) const;
	bool operator!=(Fixed const & rhs) const;

	Fixed operator*(Fixed const & rhs) const;
	Fixed operator/(Fixed const & rhs) const;
	Fixed operator+(Fixed const & rhs) const;
	Fixed operator-(Fixed const & rhs) const;

	Fixed & operator++(void);
	Fixed & operator--(void);
	
	Fixed operator++(int);
	Fixed operator--(int);
   private:
   	float	nb;
	static const int nbBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif // FIXED_H

