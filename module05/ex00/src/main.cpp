/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:33:34 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/22 12:18:06 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

int main()
{
	Bureaucrat a = Bureaucrat("a", 149);;

	std::cout << a.getGrade() << std::endl;
	std::cout << a.getName() << std::endl;

	Bureaucrat b = a;

	std::cout << b.getGrade() << std::endl;
	std::cout << b.getName() << std::endl;

	b.gradeUp();

	Bureaucrat ciao;

	std::cout << "new grade: " << b.getGrade() << std::endl;

	

	a.gradeDown();
	//a.gradeDown();

	// std::cout << a << std::endl;
	
	try
	{
		Bureaucrat c = Bureaucrat("c", 170);
		std::cout << c << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "exeption cathed: " << e.what() << std::endl;
	}

	return 0;
}
