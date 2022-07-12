/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:17:03 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 20:03:17 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form {
	private:
		const std::string _name;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string name);
		ShrubberyCreationForm(ShrubberyCreationForm & copy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm & assign);
		void executeForm(const Bureaucrat & executor) const;
		void beSigned(Bureaucrat & b);
};

#endif
