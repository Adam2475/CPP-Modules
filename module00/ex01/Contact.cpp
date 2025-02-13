/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 11:28:09 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/13 12:10:16 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

// prototyping costructo (?)
Contact::Contact(){}

// prototyping destructor (?)
Contact::~Contact(){}


void	Contact::setName(str name) {
	this->name = name;
}

void	Contact::setLast(str last) {
	this->last = last;
}

void	Contact::setNick(str nick) {
	this->nick = nick;
}

void	Contact::setPhone(str phone) {
	this->phone = phone;
}

void	Contact::setSecret(str secret) {
	this->secret = secret;
}

str	Contact::getName() const {
	return this->name;
}

str Contact::getLast() const {
	return this->last;
}

str Contact::getNick() const {
	return this->nick;
}

str Contact::getPhone() const {
	return this->phone;
}

str	Contact::getSecret() const {
	return this->secret;
}