/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:15:00 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/22 12:16:31 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

////////////////////////////////////
// Contructors & Destructors
////////////////////////////////////

Bureaucrat::Bureaucrat(): name("default"), grade(150)
{
	std::cout << "Bureaucrat default constructor called!" << std::endl;
}

// Inject parameters into the constructor
Bureaucrat::Bureaucrat(const str name, int grade) : name(name)
{
	/** @brief : name is injected in constructor
		given the fact that we want to implement logic for the grade
		we assign it manually.
	*/
	std::cout << "parameterized constructor called!" << std::endl;

	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.getName())
{
	std::cout << "bureaucrat copy constructor called!";
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

/////////////////////////////////
// Pubblic Methods
/////////////////////////////////

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &ptref)
{
	// check for autoreferencing
	if (this != &ptref)
	{
		this->grade = ptref.grade;
	}
	return *this;
}

void	Bureaucrat::gradeUp()
{
	if (this->grade > 1)
		this->grade -= 1;
	else
		std::cout << "the grade can't be higher than 1!" << std::endl;
}

void	Bureaucrat::gradeDown()
{
	if (this->grade < 150)
		this->grade += 1;
	else
		std::cout << "the grade can't be lower than 150!" << std::endl;
}

std::ostream &operator<<(std::ostream &outref, Bureaucrat const &ptref)
{
	outref << ptref.getName() << ", bureaucrat grade : " << ptref.getGrade();
	return outref;
}


///////////////////////////////////
// Getters & Setters
//////////////////////////////////

int Bureaucrat::getGrade() const
{
	return this->grade;
}

str Bureaucrat::getName() const
{
	return this->name;
}

//////////////////////////////////
// Exeptions
//////////////////////////////////

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade can't be higher than 1!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade can't be lower than 150");
}