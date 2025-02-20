/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:24:46 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/20 15:28:34 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

// declaring the new fixed number type
class Fixed {
    // the possibility of having 2 constructors with different arguments
    // is called constructor overloading and it is a form of polimorphysm
    public:
        Fixed();
        Fixed(Fixed const &src);
        ~Fixed();

        Fixed& operator=(Fixed const &rSym);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    private:
        int     value;
        static const int bits = 8;
};

#endif
