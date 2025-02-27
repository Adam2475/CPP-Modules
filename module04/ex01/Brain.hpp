/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:38:04 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:38:06 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes

class Brain
{
	private:
		std::string _ideas[100];

	public:
	// Constructors
		Brain();
		Brain(const Brain &copy);

	// Deconstructors
		virtual ~Brain();

	// Overloaded Operators
		Brain &operator=(const Brain &src);

	// Public Methods

	// Getter
		const std::string getIdea(size_t i)const;
		const std::string *getIdeaAddress(size_t i)const;
	// Setter
		void setIdea(size_t i, std::string idea);
};
