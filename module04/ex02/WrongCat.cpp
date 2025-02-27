/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:57:23 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:38:45 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WRONGCAT") {
	this->_type = WrongAnimal::getType();
	std::cout << "[C] Something strange approaches.." << std::endl;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal::WrongAnimal(src) {
	*this = src;
}

WrongCat &	WrongCat::operator=(WrongCat const &rSym) {
	if (this != &rSym) {
		this->_type = rSym._type;
	}
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "[D] Something strange runs away.." << std::endl;
}
