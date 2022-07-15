/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:40:14 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/15 18:50:31 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void print(T toPrint) {
	std::cout << toPrint << std::endl;
};

template<typename T>
void iter(T * tab, size_t size, void (*f)(T)) { 
	for (size_t i = 0; i < size; i++)
		(*f)(tab[i]);
}

#endif
