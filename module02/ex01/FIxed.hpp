/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FIxed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:30:52 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/23 14:55:42 by adapassa         ###   ########.fr       */
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

		Fixed&	operator=(Fixed const &rSym);
		int		getRawBits() const;
		void	setRawBits(int const raw);
		float	toFloat() const;
		int		toInt() const;

	private:
		int					value;
		static const int	bits = 8;
};

std::ostream&	operator<<(std::ostream& o, Fixed const &rSym);

#endif
