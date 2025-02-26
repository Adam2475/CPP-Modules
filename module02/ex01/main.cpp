/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 11:30:52 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/26 12:00:29 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <bitset>

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	/// @note : (f) = tells the compiler that it's a float and not a double
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "------------------------" << std::endl;
	/// @brief : represents the raw integer value of the fixed point number
	std::cout << "Raw bits integer of a: " << a.getRawBits() << std::endl;
	std::cout << "Raw bits integer of b: " << b.getRawBits() << std::endl; // (10 * 2^8)
	std::cout << "Raw bits integer of c: " << c.getRawBits() << std::endl; // (42.42 * 2^8)
	std::cout << "Raw bits integer of d: " << d.getRawBits() << std::endl; // (10 * 2^8)
	std::cout << "------------------------" << std::endl;
	std::cout << "Raw bits of a: " << std::bitset<32>(a.getRawBits()) << std::endl;
    std::cout << "Raw bits of b: " << std::bitset<32>(b.getRawBits()) << std::endl;
    std::cout << "Raw bits of c: " << std::bitset<32>(c.getRawBits()) << std::endl;
    std::cout << "Raw bits of d: " << std::bitset<32>(d.getRawBits()) << std::endl;
	return 0;
}
