/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:15:52 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/15 18:35:38 by augustinlorai    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
# define TEMPLATE_HPP

template<typename T>
void swap(T &a, T &b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T a, T b) {
	if (a >= b)
		return b;
	return a;
}

template<typename T>
T max(T a, T b) {
	if (a <= b)
		return b;
	return a;
}

#endif
