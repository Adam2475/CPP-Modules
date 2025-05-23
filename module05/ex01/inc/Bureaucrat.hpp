/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 17:37:51 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/21 11:26:08 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include "Form.hpp"

// vscode terminal shortcut linux: ctrl + '`'

typedef std::string str;

class Bureaucrat
{
	private:
		const str name;
		int grade;

	/** @brief : Any attempt to instantiate a Bureaucrat with an invalid grade 
		must throw an exception:
		either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
	*/

	public:
		// Default constructor
		Bureaucrat();
		// Bureaucrat();
		// Parameterized constructor
		Bureaucrat(const str name, int grade);
		// Copy constructor
		Bureaucrat(Bureaucrat const &src);
		// Default destructor
		~Bureaucrat();
		// Assignement operator overload
		Bureaucrat &operator=(Bureaucrat const &ptref);

		////////////////////////////////
		// Getters & Setters
		////////////////////////////////
		str getName() const;
		int getGrade() const;

		////////////////////////////////
		// Public methods
		////////////////////////////////
		void gradeUp();
		void gradeDown();

		void signForm(Form toSign);
		
		////////////////////////////////
		// Exeptions
		////////////////////////////////

		/**
			@brief: implementing exeptions as classes for polymorphism
		 */
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

/** @brief: You must implement an overload of the insertion («) 
	operator to print output in the
	following format (without the angle brackets):
*/
std::ostream &operator<<(std::ostream &outref, Bureaucrat const &ptref);
// restituisce un metodo di ostream da usare per cout (?)

#endif