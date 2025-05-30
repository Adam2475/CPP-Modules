/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:38:39 by adapassa          #+#    #+#             */
/*   Updated: 2025/03/01 16:06:33 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <iomanip>
#include <string>

typedef std::string str;

class Animal
{
	protected:
		str type;
	public:
		Animal();
		Animal(str type);
		Animal(Animal const &src);
		Animal &operator=(Animal const &ptref);
		virtual ~Animal();
	/// @note: for each attribute we need getters and setters.
		str getType() const;
		void setType(str type);
		// Member Functions
		virtual void makeSound() const ; 
};

#endif
