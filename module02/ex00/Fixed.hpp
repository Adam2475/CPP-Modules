/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:24:46 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:18:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

//////////////////////
// Standard libraries
//////////////////////
#include <iostream>
#include <string>

/// @brief comment format is used in Doxygen, a documentation tool for C++.

// DOCUMENTATION TAGS LIST
/**
* @brief
* @param
* @return
* @note
* @warning
* @attention
* @author
* @version
* @date
* @todo
*/

////////////////////////
// Classes Declaration
////////////////////////

/** 
*	@brief declaring the new fixed number type
*/

class Fixed
{
	public:
		//////////////////////////////
		// Constuctors & Destructors
		//////////////////////////////
		Fixed(); 								// Default Constructor
		Fixed(Fixed const &src);				// Copy Constructor
		// The possibility of having 2 constructors with different arguments
		// is called constructor overloading and it is a form of polimorphysm.
		Fixed	&operator=(Fixed const &ptref);	// Assignement Operator Overload
		/**
		* @note : the assignement operato is called automatically when assigning one object to another
		* 		es: Fixed a, Fixed b; b = a;
		* @note : you can explicitly call operitor like: b.operator=(a); // same as b = a
		*/
		// Overloads the assignement operator (=), allows one "Fixed"
		// object to be assigned to another without duplicating pointers
		~Fixed();								// Default Destructor
		//////////////////////
		// Getters & Setters
		//////////////////////
		int getRawBits(void) const;
		void setRawBits(int const raw);
	// Variables accessable only from the class itself
	private:
		int	value;
		static const int bits = 8;
};

#endif
