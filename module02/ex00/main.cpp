/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:35:26 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/26 10:44:52 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << "------------------------" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(42);
	std::cout << "------------------------" << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << "------------------------" << std::endl;
	c.operator = (a);
	std::cout << "------------------------" << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
