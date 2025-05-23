/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:54:45 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/21 14:11:24 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(Bureaucrat &target) : AForm::AForm("Presidential Pardon", 25, 5), target(target) {
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm::AForm(src), target(src.target) {
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm default destructor called." << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const &rSym) {
	if (this != &rSym) {
		this->target = rSym.target;
	}
	return *this;
}

std::ostream &operator<<(std::ostream & o, PresidentialPardonForm const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getGradeToSign() << " to sign it, and grade " << rSym.getGradeToExec() << " to execute it.";
	return o;
}

void	PresidentialPardonForm::execute(Bureaucrat & executor) const
{
	if (this->is_signed == false)
	{
		std::cout << this->name << " is not signed! it can't be executed!" << std::endl;
		return ;
	}
	executor.executeForm(*this);
	if (this->is_signed == true)
		std::cout << this->target.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		std::cout << this->name << " is not signed, can't execute." << std::endl;
}