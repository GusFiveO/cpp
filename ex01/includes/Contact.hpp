/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 14:16:24 by alorain           #+#    #+#             */
/*   Updated: 2022/05/02 18:58:14 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class Contact {
	private:
		std::string Firstname;
		std::string Lastname;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;

	public:
		Contact();
		void	CreateContact();
		void	PrintFirstname(int formated);
		void	PrintLastname(int formated);
		void	PrintNickname(int formated);
		void	PrintPhoneNumber(int formated);
		void	PrintDarkestSecret(int formated);

		void	PrintInfo();

};

#endif
