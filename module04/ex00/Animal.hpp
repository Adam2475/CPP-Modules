/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:38:39 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/28 11:28:47 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#pragma once

#include <iostream>
#include <iomanip>
#include <string>

typedef std::string str;

class Animal
{
	public:
		Animal();
		Animal(str type);
		Animal(const Animal &src);
		Animal &operator=(Animal const &ptref);
		~Animal();
	/// @note: for each attribute we need getters and setters.
		const str getType();
		void setType(str type);
	protected:
		str type;
};

#endif
