/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:30:52 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:18:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FIXED_HPP_
#define _FIXED_HPP_

#include <iostream>

////////////////////////
// Classes Declaration
////////////////////////
class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(const int n); // Costructor that takes an integer
		Fixed(const float f); // Constructor that takes a float
		~Fixed();

		Fixed&	operator=(Fixed const &rSym);
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;

	private:
		int					value;
		static const int	bits = 8;
};

/// @note : (<<) = stream insertion operator. 
/// @brief : Overloaded (<<) operator for outputting "Fixed" objects
std::ostream	&operator<<(std::ostream& o, Fixed const &rSym);

#endif
