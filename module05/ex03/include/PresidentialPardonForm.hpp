/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:17:03 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 20:10:04 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
 
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		const std::string _name;
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string name);
		PresidentialPardonForm(PresidentialPardonForm & copy);
		~PresidentialPardonForm(void);
		PresidentialPardonForm & operator=(PresidentialPardonForm & assign);
		void executeForm(const Bureaucrat & executor) const;
		void beSigned(Bureaucrat & b);
};

#endif
