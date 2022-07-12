/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:17:03 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 20:04:03 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		const std::string _name;
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string name);
		RobotomyRequestForm(RobotomyRequestForm & copy);
		~RobotomyRequestForm(void);
		RobotomyRequestForm & operator=(RobotomyRequestForm & assign);
		void beSigned(Bureaucrat & b);
		void executeForm(const Bureaucrat & executor) const;
};

#endif
