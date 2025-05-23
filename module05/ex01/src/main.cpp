/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:43:01 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/22 12:24:28 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main()
{
	Bureaucrat caino = Bureaucrat("caino", 135);

	// std::cout << caino.getGrade() << std::endl;
	// std::cout << caino.getName() << std::endl;

	// Bureaucrat ciaone;

	// std::cout << ciaone << std::endl;

	// // //Bureaucrat b = caino;

	// Form a;

	// std::cout << a << std::endl;

	Form parcella = Form("parcella" , 140, 50);

	Form impossible = Form("impossible", 134, 124);

	// parcella.beSigned(caino);
	// impossible.beSigned(caino);

	// caino.gradeUp();

	// impossible.beSigned(caino);

	// caino.signForm(impossible);

	caino.signForm(parcella);

	caino.signForm(impossible);

	std::cout << parcella << std::endl;


	try
	{
		Bureaucrat joe = Bureaucrat("joe", 0);
		Form fascista = Form("fascista", 1, 0);
	}
	catch(std::exception &e)
	{
		std::cout << "exeption cathed: " << e.what() << std::endl;
	}

	return (0);
}
