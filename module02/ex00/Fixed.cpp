/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:39:45 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:50:26 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/////////////////////////////////
// Constructors Implementation //
/////////////////////////////////

/// @brief Purpose: Initializes a Fixed object with value = 0.
/// @note Syntax: " : value(0) " = Member Initialization List: set value when created
Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	/// @brief Calls the assignement operator to copy the data
	*this = src; 
}
///  @note (*this) = pointer dereference to the CURRENT ISTANCE of the class

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/**
* @brief Purpose: Allows assigning one fixed object (a = b),
*		use the getWarBits() to retrieve the raw value
* @return (*this): to allow chained assignements (a = b = c)
*/
Fixed	&Fixed::operator=(Fixed const &ptref)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->value = ptref.getRawBits();
	// Return a pointer to to an instace of itself
	return (*this);
}

//////////////////////////////////
// Getters & Setters
//////////////////////////////////

/// @brief Purpose: return the integer "value" stored in the class
int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

/** @brief : Set the value of itself to raw
*	@arg : The raw bit value to use as value
*/

void	Fixed::setRawBits(int const raw)
{
	this->value = raw;
}
