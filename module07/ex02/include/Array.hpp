/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 18:40:14 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/07/16 18:06:18 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

//template<class T>
template<typename T>
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
			const char * what(void) const throw() {return "invalid index";};
		};

		T & operator[](size_t idx);
		Array<T> & operator=(Array<T> & assign);
};


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
	for (size_t i = 0; i < copy._size; i++)
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
	return this->_size;
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

#endif
