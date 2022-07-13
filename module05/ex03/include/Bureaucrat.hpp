/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:05:24 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 16:37:37 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		const std::string _name;
		unsigned int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat & copy);
		~Bureaucrat(void);
		const Bureaucrat &  operator=(const Bureaucrat & assign);

		std::string getName(void) const;
		unsigned int getGrade(void) const;

		void signForm(Form & form);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what(void) const throw() {return "Can't instantiate Bureaucrat grade too high";}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what(void) const throw() {return "Can't instantiate Bureaucrat grade too low";}
		};
};

std::ostream & operator<<(std::ostream & os,const Bureaucrat & rhs);

#endif
