/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:42:58 by adapassa          #+#    #+#             */
/*   Updated: 2025/03/01 16:13:28 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

typedef std::string str;

class Brain
{
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &other);
	protected:
		str ideas[100]; // Publica array to store ideas
};

#endif