/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:48:26 by alorain           #+#    #+#             */
/*   Updated: 2022/07/18 14:54:34 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <list>
# include <deque>
# include <set>

template< typename T>
int easyfind(T cont, int nb) {
	typename T::iterator ret; 
	ret = std::find(cont.begin(), cont.end(), nb);
	if (ret == cont.end())
		throw std::exception();
	return (*ret);
}

#endif
