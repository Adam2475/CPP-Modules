/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:47:19 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/21 14:07:23 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Bureaucrat.hpp"

#include <cstdlib>
#include <ctime>

#include <fstream>

typedef std::string str;

class AForm
{
	// protected let inherited classes use the variable 
	protected:
		const str name;
		bool is_signed;
		const int grade_to_sign;
		const int grade_to_exec;

	public:
		// non virtual method resolution is done at compile time
		AForm(const str name, const int grade_to_sign, const int grade_to_exec);
		AForm();
		// a virtual method is used for polymorphic behaviour
		// they can be overwritten in child classes
		AForm(AForm const &src);
		// defined one virtual method to make the class abstract
		virtual ~AForm();
		AForm &operator=(AForm const &ptref);

		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getSigned() const;
		str	getName() const;

		void beSigned(Bureaucrat const &signer);

		// new function for the execution method
		// implement function in the concrete classes later
		// virtual method to be overwritten in child classes
		virtual void	execute(Bureaucrat & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &outref, AForm const &ptref);
// restituisce un metodo di ostream da usare per cout (?)

#endif
