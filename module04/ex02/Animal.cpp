/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:08:01 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:38:45 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

Animal::Animal(str type) : _type(type) {
	std::cout << "[C] Animal base constructor called for type : " << this->_type << "." << std::endl;
}

Animal::Animal() : _type("UNKNOWN") {
	std::cout << "[C] Animal default constructor called." << std::endl;
}

Animal::Animal(Animal const &src) {
	*this = src;
}

Animal &	Animal::operator=(Animal const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

Animal::~Animal() {
	std::cout << "[D] Default destructor called for type : " << this->_type << "." << std::endl; 
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

str	Animal::getType() const {
	return this->_type;
}

/* ------------	-------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	Animal::makeSound() const {
	std::cout << "[Unknown Animal] Grrr..." << std::endl;
}
