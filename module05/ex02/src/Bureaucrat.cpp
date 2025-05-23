/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:15:00 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/22 12:25:41 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"
#include "../inc/AForm.hpp"

////////////////////////////////////
// Contructors & Destructors
////////////////////////////////////

// Bureaucrat::Bureaucrat()
// {
// 	std::cout << "bureaucrat constructor called!" << std::endl;
// }

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
	std::cout << "bureaucrat copy constructor called!" << std::endl;
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

void Bureaucrat::executeForm(AForm const &form)
{
	// form.execute(*this);
	if (this->grade > form.getGradeToExec()) 
	{
		std::cout << this->name << " can't execute " << form.getName() << "." << std::endl;
		throw AForm::GradeTooLowException();
	}
	std::cout << this->name << " executed " << form.getName() << "." << std::endl;
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