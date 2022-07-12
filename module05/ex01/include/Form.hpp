/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 15:40:08 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 16:42:02 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool _sign;
		unsigned int _gradeToSign;
		unsigned int _gradeToExec;
	public:
		Form(void);
		Form(std::string name, unsigned int grade);
		Form(const Form & copy);
		~Form(void);
		Form & operator=(Form & assign);
		
		std::string getName(void) const;
		unsigned int getGradeToSign(void) const;
		unsigned int getGradeToExec(void) const;
		bool isSign(void) const;
		
		void beSigned(Bureaucrat & b);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what(void) const throw() {return "Can't instantiate Form grade too high";}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what(void) const throw() {return "Can't instantiate Form grade too low";}
		};
};

#endif
