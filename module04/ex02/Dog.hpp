/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:52:26 by adapassa          #+#    #+#             */
/*   Updated: 2025/03/01 13:54:28 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		
		Dog &operator=(const Dog &ptref);

		void makeSound() const;
		/// @brief : override keyword to redefine virtual variables
};

/**
	In fact const void* is sometimes essential.
	It declares that the thing being pointed to is read only as
	Of course, there is also const void* const meaning that
	both the pointer and the thing it points to are constant.
*/

#endif