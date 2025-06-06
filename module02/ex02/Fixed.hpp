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

class Fixed {
	public:
		Fixed();
		Fixed(Fixed const &src);
		Fixed(const int n);
		Fixed(const float f);
		~Fixed();

		// overloading all types of operators

		// those allow arithmetic operation between fixed numbers
		Fixed			&operator=(Fixed const &rSym);
		Fixed			operator+(Fixed const &rSym) const;
		Fixed			operator-(Fixed const &rSym) const;
		Fixed			operator*(Fixed const &rSym) const;
		Fixed			operator/(Fixed const &rSym) const; // using comparison operators
		bool			operator<(Fixed const &rSym) const;
		bool			operator>(Fixed const &rSym) const;
		bool			operator<=(Fixed const &rSym) const;
		bool			operator>=(Fixed const &rSym) const;
		bool			operator==(Fixed const &rSym) const;
		bool			operator!=(Fixed const &rSym) const;
		Fixed			&operator++();
		Fixed			operator++(int);
		Fixed			&operator--();
		Fixed			operator--(int);

		int				getRawBits() const;
		void			setRawBits(int const raw);
		float			toFloat() const;
		int				toInt() const;
		
		static Fixed &			min(Fixed &a, Fixed &b);
		static Fixed const 		&min(Fixed const &a, Fixed const &b);
		static Fixed &			max(Fixed &a, Fixed &b);
		static Fixed const 		&max(Fixed const &a, Fixed const &b);

	private:
		int					value;
		static const int	bits = 8;
};


// Allows printing the fixed-point number conveniently using std::cout
std::ostream	&operator<<(std::ostream& o, Fixed const &rSym);

#endif
