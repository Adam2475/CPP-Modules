/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:07:09 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:18:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

/* -------------------------------------------------------------------------- */
/*                          Constructors & operators                          */
/* -------------------------------------------------------------------------- */

WrongAnimal::WrongAnimal(str type) : _type(type) {
	std::cout << "[C] WrongAnimal base constructor called for type : " << this->_type << "." << std::endl;
}

WrongAnimal::WrongAnimal() : _type("UNKNOWN") {
	std::cout << "[C] WrongAnimal default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) {
	*this = src;
}

WrongAnimal &	WrongAnimal::operator=(WrongAnimal const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "[D] Default destructor called for type : " << this->_type << "." << std::endl; 
}

/* -------------------------------------------------------------------------- */
/*                              Geteurs & seteurs                             */
/* -------------------------------------------------------------------------- */

str	WrongAnimal::getType() const {
	return this->_type;
}

/* ------------	-------------------------------------------------------------- */
/*                              Members functions                             */
/* -------------------------------------------------------------------------- */

void	WrongAnimal::makeSound() const {
	std::cout << "[Unknown WrongAnimal] Grrbadabibobidap..." << std::endl;
}
