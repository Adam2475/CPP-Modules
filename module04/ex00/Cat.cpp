/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:52:30 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/24 15:07:52 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include "../include/Cat.hpp"

Cat::Cat() : Animal::Animal("CAT") {
	this->_type = Animal::getType();
	std::cout << "[C] A new Cat quietly approaches.." << std::endl;
}

Cat::Cat(Cat const &src) : Animal::Animal(src) {
	*this = src;
}

Cat &	Cat::operator=(Cat const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

Cat::~Cat() {
	std::cout << "[D] The Cat runs away.." << std::endl;
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	Cat::makeSound() const {
	std::cout << "[Cat] : Meaouw.." << std::endl;
}