/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:54:42 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/21 13:35:17 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(Bureaucrat & target) : AForm::AForm("Shrubbery", 145, 137), target(target) {
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm::AForm(src), target(src.target) {
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm default destructor called." << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rSym) {
	if (this != &rSym) {
		this->target = rSym.target;
	}
	return *this;
}

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getGradeToSign() << " to sign it, and grade " << rSym.getGradeToExec() << " to execute it.";
	return o;
}

void	ShrubberyCreationForm::execute(Bureaucrat & executor) const
{
	if (this->is_signed == false)
	{
		std::cout << this->name << " is not signed! it can't be executed!" << std::endl;
		return ;
	}
	str				outfile = this->target.getName() + "_shrubbery";
	std::ofstream	output(outfile.c_str());
	
	executor.executeForm(*this);
	if (this->is_signed == true) {
		output << "       _-_" << std::endl;
		output << "    /~~   ~~\\" << std::endl;
		output << " /~~         ~~\\" << std::endl;
		output << "{               }" << std::endl;
		output << " \\  _-     -_  /" << std::endl;
		output << "   ~  \\ //  ~" << std::endl;
		output << "_- -   | | _- _" << std::endl;
		output << "  _ -  | |   -_" << std::endl;
		output << "      // \\\\" << std::endl;
	}
	else
		std::cout << this->name << " is not signed, can't execute." << std::endl;
}