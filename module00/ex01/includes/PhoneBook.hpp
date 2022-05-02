/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: augustinlorain <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:49:57 by augustinlorai     #+#    #+#             */
/*   Updated: 2022/05/02 18:10:42 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact ContactTab[8];
		int	i;

	public:
		PhoneBook();

		void AddContact();
		void PrintContacts();
		void SearchContact();
		void Exit();

};

#endif
