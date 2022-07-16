/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:40:14 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/16 16:40:41 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

//template<typename T>
template<class T>
class Array {
	private:
		T * _tab;
		size_t _size;
	public:
		Array(void);
		Array(Array<T> & copy);
		Array(size_t size);
		~Array(void);
		size_t size(void) const;

		class ArrayException : public std::exception {
			const char * what(void) const throw() {};
		};

		T & operator[](size_t idx);
		Array<T> & operator=(Array<T> & assign);
};

#endif
