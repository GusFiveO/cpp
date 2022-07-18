/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:57:28 by alorain           #+#    #+#             */
/*   Updated: 2022/07/18 19:45:03 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>

class Span {
	private:
		size_t _size;
		size_t _idx;
		std::vector<int>  _tab;
	public:
		Span(void);
		Span(size_t size);
		Span(Span & copy);
		~Span(void);
		Span & operator=(Span & assign);

		void addNumber(int nb);
		void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int shortestSpan(void);
		int longestSpan(void);

		class arrayFull : public std::exception {
			virtual const char * what(void) const throw() {return "Span vector is full";}
		};

		class arrayEmpty : public std::exception {
			virtual const char * what(void) const throw() {return "Span vector is empty";}
		};
};

#endif
