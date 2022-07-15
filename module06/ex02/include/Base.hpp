/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:39:50 by alorain           #+#    #+#             */
/*   Updated: 2022/07/15 15:47:01 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base {
	public:
		virtual ~Base(void) { std::cout << "Base destructor" << std::endl;};
};

class A : public Base {
	public:
		A(void) { std::cout << "A constructor" << std::endl;};
		~A(void) { std::cout << "A destructor" << std::endl;};
};

class B : public Base {
	public:
		B(void) { std::cout << "B constructor" << std::endl;};
		~B(void) { std::cout << "B destructor" << std::endl;};
};

class C : public Base {
	public:
		C(void) { std::cout << "C constructor" << std::endl;};
		~C(void) { std::cout << "C destructor" << std::endl;};
};

#endif
