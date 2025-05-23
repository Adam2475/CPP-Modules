/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:26:25 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/21 12:03:08 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <iomanip>
// #include "./Bureaucrat.hpp"


// forward definition of class beurocrat prevent
// circular dependencies
// gives incomplete class error
class Bureaucrat;

typedef std::string str;

class Form
{
	// private don't make method accessable to inherited classes
	private:
		const str name;
		bool is_signed;
		const int grade_to_sign;
		const int grade_to_exec;

	public:
		Form(const str name, const int grade_to_sign, const int grade_to_exec);
		Form();
		Form(Form const &src);
		~Form();
		Form &operator=(Form const &ptref);

		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getSigned() const;
		str	getName() const;

		void beSigned(Bureaucrat const &signer);

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

std::ostream &operator<<(std::ostream &outref, Form const &ptref);
// restituisce un metodo di ostream da usare per cout (?)

#endif
