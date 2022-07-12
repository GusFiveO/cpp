/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alorain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 12:05:24 by alorain           #+#    #+#             */
/*   Updated: 2022/07/12 14:47:44 by alorain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat {
	private:
		std::string _name;
		unsigned int _grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(const Bureaucrat & copy);
		~Bureaucrat(void);
		const Bureaucrat &  operator=(const Bureaucrat & assign);
		std::string getName(void) const;
		unsigned int getGrade(void) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char * what(void) const throw() {return "Can't instantiate grade too high";}
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char * what(void) const throw() {return "Can't istantiate grade too low";}
		};
};

std::ostream & operator<<(std::ostream & os,const Bureaucrat & rhs);

#endif
