/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:39:50 by alorain           #+#    #+#             */
/*   Updated: 2022/07/14 17:49:15 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base {
	public:
		virtual ~Base(void);
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

#endif
