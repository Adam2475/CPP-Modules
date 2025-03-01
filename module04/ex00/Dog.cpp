/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:53:50 by adapassa          #+#    #+#             */
/*   Updated: 2025/03/01 13:58:36 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Default Constructor
// calls parameterized animal constructor
Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
}

// Copy constructor 
Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

// Destructor
Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}

// Assignement operator overload
Dog &Dog::operator=(const Dog &src)
{
	std::cout << "Dog assignement operator called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

// Member Functions
void Dog::makeSound() const
{
	std::cout << "Bau Bau" << std::endl;
}