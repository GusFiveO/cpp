/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 16:10:50 by alorain           #+#    #+#             */
/*   Updated: 2022/07/14 17:10:22 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(Data * ptr) {
	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return raw;
}

Data * deserialize(uintptr_t raw) {
	Data * retPtr;

	retPtr = reinterpret_cast<Data*>(raw);
	return retPtr;
}

int main(void) {

	Data *		ptr;
	Data		data;
	uintptr_t	raw;

	data.nb = 42;
	ptr = &data;
	std::cout << &data << std::endl;
	raw = serialize(ptr);
	ptr = deserialize(raw);
	std::cout << ptr << std::endl;
	return 0;
}
