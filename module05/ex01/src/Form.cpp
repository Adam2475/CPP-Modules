/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:42:49 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/22 12:21:45 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Form.hpp"
#include "../inc/Bureaucrat.hpp"
#include <stdio.h>

Form::Form() : name("default"), is_signed(false), grade_to_sign(150), grade_to_exec(150)
{
	std::cout << "default constructor passed for form!" << std::endl;
}

Form::Form(const str name, const int grade_to_sign, const int grade_to_exec) : name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	std::cout << "parameterized constructor for form!" << std::endl;
	this->is_signed = false;

	if (grade_to_exec < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
	else if (grade_to_exec > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &src) : name(src.getName()), grade_to_sign(src.getGradeToSign()), grade_to_exec(src.getGradeToExec())
{
	std::cout << "copy constructor called!" << std::endl;
	*this = src;
}

Form::~Form() {}

Form &Form::operator=(Form const &ptref)
{
	if (this != &ptref)
	{
		this->is_signed = ptref.is_signed;
	}
	return *this;
}

int Form::getGradeToSign() const
{
	return(this->grade_to_sign);
}
int Form::getGradeToExec() const
{
	return (this->grade_to_exec);
}
bool Form::getSigned() const
{
	return (this->is_signed);
}
str	Form::getName() const
{
	return (this->name);
}

void	Form::beSigned(Bureaucrat const &signer)
{
	if (signer.getGrade() > this->grade_to_sign)
	{
		std::cout << signer.getName() << " couldn't sign the form: " << this->name << " because grade is too low" << std::endl;
	}
	else
	{
		this->is_signed = true;
		std::cout << signer.getName() << " signed: " << this->name << std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("grade can't behigher than 1");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("grade can't be lower than 150");
}

std::ostream &operator<<(std::ostream &outref, Form const &ptref)
{
	outref << "Form Name: " << ptref.getName() << std::endl;
	outref << "Signed: ";
	if (ptref.getSigned())
		outref << "True" << std::endl;
	else
		outref << "False" << std::endl;
	outref << "grade to sign: " << ptref.getGradeToSign() << ", grade to execute: " << ptref.getGradeToExec() << std::endl;
	return outref;
}
