/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:54:47 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/23 14:11:32 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"
#include "../inc/RobotomyRequestForm.hpp"
#include "../inc/PresidentialPardonForm.hpp"
#include "../inc/ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat caino = Bureaucrat("caino", 135);

	Bureaucrat ciccio = Bureaucrat("ciccio", 150);

	// std::cout << caino.getGrade() << std::endl;
	// std::cout << caino.getName() << std::endl;

	Bureaucrat bastardo = Bureaucrat("bastardo", 10);

	Bureaucrat signore = Bureaucrat("signore", 3);

	// should not be instantiable as abstract
	//AForm parcella = AForm("parcella" , 140, 50);

	//AForm impossible = AForm("impossible", 134, 124);

	// class should be not instantiable but class poiner is?
	std::cout << "-----------------------------------" << std::endl;

	AForm *robot = new RobotomyRequestForm(caino);
	AForm *pardon = new PresidentialPardonForm(caino);
	AForm *shrub = new ShrubberyCreationForm(ciccio);

	printf("-----------------------------------\n");

	std::cout << &robot << std::endl;
	std::cout << robot << std::endl;
	std::cout << *robot << std::endl;

	printf("-----------------------------------\n");

	pardon->beSigned(ciccio);
	robot->beSigned(ciccio);
	
	pardon->beSigned(bastardo);
	robot->beSigned(bastardo);
	shrub->beSigned(bastardo);

	printf("-----------------------------------\n");

	// doing try-catch block to prevent crashing
	// the block will stop if a statement fails
	try
	{
		// should fail
		//pardon->execute(ciccio);
		Bureaucrat abele = Bureaucrat("abele", 0);
		robot->execute(bastardo);
		shrub->execute(bastardo);

		// should fail
		//pardon->execute(bastardo);
		pardon->execute(signore);
	}
	catch (const std::exception &e)
	{
		std::cout << "Exeption Caught: " << e.what() << std::endl;
	}


	delete shrub;
	delete robot;
	delete pardon;
	return (0);
}