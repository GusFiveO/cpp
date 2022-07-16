/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 19:18:13 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/16 16:38:57 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) {
	this->_tab = new T[0]; 
	this->_size = 0;
	std::cout << "Default Array constructor called" << std::endl;
}

template<typename T>
Array<T>::Array(Array<T> & copy) {
	this->_tab = new T[copy._size];
	this->_size = copy._size;
	for (int i = 0; i < copy._size; i++)
		this->_tab[i] = copy._tab[i]; 
	std::cout << "Default Array copy constructor called" << std::endl;
}
		
template<typename T>
Array<T>::Array(size_t size) {
	this->_tab = new T[size];
	this->_size = size;
	std::cout << "Default Array parameterized constructor called" << std::endl;
}
		
template<typename T>
Array<T>::~Array(void) {
	delete [] this->_tab;
	std::cout << "Default Array destructor called" << std::endl;
}

template<typename T>
size_t Array<T>::size(void) const {
	return *this->_size;
}

template<typename T>
T & Array<T>::operator[](size_t idx) {
	if (idx >= this->_size || idx < 0)
		throw Array::ArrayException();
	else
		return this->_tab[idx];
}

template<typename T>
Array<T> & Array<T>::operator=(Array<T> & assign) {
	delete [] this->_tab;
	this->_tab = new T[assign.size()];
	this->_size = assign.size();
	for (int i = 0; i < assign.size(); i++)
		this->_tab[i] = assign[i]; 
	return (*this);
}
