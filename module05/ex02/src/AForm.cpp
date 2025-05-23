/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:54:52 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/22 12:27:52 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm() : name("default"), is_signed(false), grade_to_sign(150), grade_to_exec(150)
{
	std::cout << "default constructor passed for form!" << std::endl;
}

AForm::AForm(const str name, const int grade_to_sign, const int grade_to_exec) : name(name), grade_to_sign(grade_to_sign), grade_to_exec(grade_to_exec)
{
	std::cout << "parameterized constructor passed for form!" << std::endl;
	this->is_signed = false;
	// std::cout << this->name;
	// try
	// {
	// if (grade_to_exec < 1 || grade_to_sign)
	// 	throw GradeTooHighException();
	// else if (grade_to_exec > 150 || grade_to_sign)
	// 	throw GradeTooLowException();
	// }
	// catch(std::exception &e)
	// {
	// 	std::cout << "exeption cathed: " << e.what() << std::endl;
	// }
}

AForm::AForm(AForm const &src) : name(src.getName()), grade_to_sign(src.getGradeToSign()), grade_to_exec(src.getGradeToExec())
{
	std::cout << "copy constructor called";
	*this = src;
}

AForm::~AForm() {}

AForm &AForm::operator=(AForm const &ptref)
{
	if (this != &ptref)
	{
		this->is_signed = ptref.is_signed;
	}
	return *this;
}

int AForm::getGradeToSign() const
{
	return(this->grade_to_sign);
}
int AForm::getGradeToExec() const
{
	return (this->grade_to_exec);
}
bool AForm::getSigned() const
{
	return (this->is_signed);
}
str	AForm::getName() const
{
	return (this->name);
}

void	AForm::beSigned(Bureaucrat const &signer)
{
	if (signer.getGrade() > this->grade_to_sign)
		std::cout << signer.getName() << " couldn't sign the form: " << this->name << " because grade is too low" << std::endl;
	else
	{
		this->is_signed = true;
		std::cout << signer.getName() << " signed " << this->name << std::endl;
	}
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("grade can't behigher than 1");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("grade can't be lower than 150");
}

std::ostream &operator<<(std::ostream &outref, AForm const &ptref)
{
	outref << "Form Name: " << ptref.getName() << std::endl;
	outref << "Signed: ";
	if (ptref.getSigned())
		outref << "True" << std::endl;
	else
		outref << "False" << std::endl;
	outref << "grade to sign: " << ptref.getGradeToSign() << " grade to execute: " << ptref.getGradeToExec() << " to execute it.";
	return outref;
}