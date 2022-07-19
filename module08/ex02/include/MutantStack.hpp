/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:55:03 by alorain           #+#    #+#             */
/*   Updated: 2022/07/19 17:21:08 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <vector>
# include <stack>
# include <deque>

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
	public:
		MutantStack(void) {}
		MutantStack(MutantStack<T> & copy) : std::stack<T, Container>(copy) {}
		MutantStack<T> & operator=(MutantStack<T> & assign);

		typedef typename std::stack<T, Container>::container_type::iterator iterator;

		iterator begin(void) {return std::stack<T, Container>::c.begin();}
		iterator end(void) {return std::stack<T, Container>::c.end();}
};

#endif
