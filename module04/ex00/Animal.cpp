/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:49:52 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/28 12:53:52 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

////////////////////////////////
// Constructors Implementation
////////////////////////////////

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

/// @brief : injects parameters into the constructor
Animal::Animal(str type) : type(type)
{
	std::cout << "Parameterized constructor called" << std::endl;
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
}

////////////////////////
// Getters & Setters
///////////////////////

const str Animal::getType()
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
		this->type = ptref.type;
	return (*this);
}

void	Animal::makeSound()
{
	
}
