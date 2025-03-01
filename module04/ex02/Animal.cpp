/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:49:52 by adapassa          #+#    #+#             */
/*   Updated: 2025/03/01 16:26:36 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

////////////////////////////////
// Constructors Implementation
////////////////////////////////

// if not always initialized it SEGFAULTS when deleted
Animal::Animal() : type("Unknown"), brain(NULL)
{
	std::cout << "Animal default constructor called" << std::endl;
}

/// @brief : injects parameters into the constructor
Animal::Animal(str type) : type(type)
{
	std::cout << "Parameterized constructor called" << std::endl;
	this->brain = new Brain();
	std::cout << "Animal brain initialized" << std::endl;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Copy constructor called" << std::endl;
	/// @brief : Calls assignement operator
	//			on the dereferenced implicit (this) pointer.
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Called Animal Destructor!" << std::endl;
	delete brain;
}

////////////////////////
// Getters & Setters
///////////////////////

str Animal::getType() const
{
	return (this->type);
}

void Animal::setType(str type)
{
	this->type = type;
}

///////////////////////
// Member Functions
///////////////////////

/// @brief : overloads the assignement operator
Animal &Animal::operator=(const Animal &ptref)
{
	std::cout << "Assignement overload called" << std::endl;
	if (this != &ptref)
	{
		this->type = ptref.type;
		delete brain;
		brain = new Brain(*ptref.brain);
	}
	return (*this);
}

/**
* @note : made makeSound() virtual so the Animal class can become abstract
*/

// void Animal::makeSound() const
// {
// 	std::cout << "Some generic animal sound!" << std::endl;
// }

/// @brief : animal is declared virtual to not be implemented as default
//			but only redefined.
