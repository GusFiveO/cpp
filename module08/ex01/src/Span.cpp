/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:13:09 by alorain           #+#    #+#             */
/*   Updated: 2022/07/18 19:53:47 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) {
	this->_size = 0;
	this->_idx = 0;
}

Span::Span(size_t size) : _size(size) {
	this->_idx = 0;
}

Span::Span(Span & copy) {
	*this = copy;
}

Span::~Span(void) {
}

Span & Span::operator=(Span & assign) {
	this->_size = assign._size;
	this->_tab = assign._tab;
	this->_idx = assign._idx;
	return *this;
}

void Span::addNumber(int nb) {
	if (this->_idx >= this->_size)
		throw Span::arrayFull();
	else
	{
		this->_tab.push_back(nb);
		this->_idx++;
	}
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	while (begin != end)
	{
		if (this->_idx >= this->_size)
			throw Span::arrayFull();
		else
		{
			this->_tab.push_back(*begin);
			this->_idx++;
		}
		begin++;
	}
}

int  Span::shortestSpan(void) {
	int ret;
	if (this->_idx == 0)
		throw Span::arrayEmpty();
	else if (this->_idx == 1)
		return (0);
	std::vector<int> sorted(this->_tab);
	std::sort(sorted.begin(), sorted.end());
	std::vector<int>::iterator i = sorted.begin();
	ret = std::max(*i, *++i) - std::min(*--i, *++i);
	while (*i != *sorted.end())
	{
		int calcul = std::max(*i, *++i) - std::min(*--i, *++i);
		if (ret > calcul)
			ret = calcul;
	}
	return ret;
}

int  Span::longestSpan(void) {
	int ret = 0;
	if (this->_idx == 0)
		throw Span::arrayEmpty();
	else if (this->_idx == 1)
		return (0);
	else
	{
		ret = *std::max_element(this->_tab.begin(), this->_tab.end());
		ret -= *std::min_element(this->_tab.begin(), this->_tab.end());
	}
	return ret;
}
