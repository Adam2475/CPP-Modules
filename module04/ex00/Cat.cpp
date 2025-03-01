/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:06:05 by adapassa          #+#    #+#             */
/*   Updated: 2025/03/01 13:25:29 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor
Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

// Copy constructor
Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

// Destructor
Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

// Assignment operator
Cat &Cat::operator=(const Cat& other)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

// Override makeSound function
void Cat::makeSound() const
{
	std::cout << "Meow! Meow!" << std::endl;
}