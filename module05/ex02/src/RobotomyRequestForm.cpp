/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:54:40 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/21 14:22:12 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(Bureaucrat & target) : AForm("Robotomy", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm::AForm(src), target(src.target) {
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	*this = src;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm default destructor called." << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const &rSym) {
	if (this != &rSym) {
		this->target = rSym.target;
	}
	return *this;
}

std::ostream &operator<<(std::ostream & o, RobotomyRequestForm const &rSym) {
	o << "Form name : " << rSym.getName() << std::endl;
	o << "Signed : ";
	if (rSym.getSigned())
		o << "True" << std::endl;
	else
		o << "False" << std::endl;
	o << "Need to be grade " << rSym.getGradeToSign() << " to sign it, and grade " << rSym.getGradeToExec() << " to execute it.";
	return o;
}

void	RobotomyRequestForm::execute(Bureaucrat & executor) const
{
	if (this->is_signed == false)
	{
		std::cout << this->name << " is not signed! it can't be executed!" << std::endl;
		return ;
	}
	executor.executeForm(*this);
	if (this->is_signed == true)
	{
		std::cout << "*Some drilling noise*" << std::endl;

		// seeding the random generator
		srand(time(NULL));
		int	nb = rand() % 100 + 1;
		if (nb % 2 == 0)
		{
			// std::cout << nb << std::endl;
			std::cout << this->target.getName() << " has been robotomized." << std::endl;
		}
		else
			std::cout << this->target.getName() << " was not robotomized." << std::endl;
	}
}