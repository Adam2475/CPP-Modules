/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:44:45 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 16:32:29 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/// @brief : for undefined references dont forget to implement
// 			all the constructors.

/////////////////////////////////
// Constructors Implementation //
/////////////////////////////////

ClapTrap::ClapTrap() {}
/// @note : new default constructor

ClapTrap::ClapTrap(str name) : name(name), hitPoints(10), energyPoints(10), attackDamage(1)
{
	std::cout << "ClapTrap \"" << name << "\" was created with :" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "HP : " << this->hitPoints << std::endl;
	std::cout << "Energy Points : " << this->energyPoints << std::endl;
	std::cout << "Attack Damage : " << this->attackDamage << std::endl;
	std::cout << "--------------------" << std::endl << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " was destroy." << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &rSym) {
	if (this != &rSym) {
		this->hitPoints = rSym.getHitPoints();
		this->energyPoints = rSym.getEnergyPoints();
		this->attackDamage = rSym.getAttackDamage();
	}
	return *this;
}

///////////////////////
// Getters & Setters //
///////////////////////

int	ClapTrap::getHitPoints() const
{
	return this->hitPoints;
}
int	ClapTrap::getEnergyPoints() const
{
	return this->energyPoints;
}
int	ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}

void	ClapTrap::setHitPoints(int hitPoints)
{
	this->hitPoints = hitPoints;
}
void	ClapTrap::setEnergyPoints(int energyPoints)
{
	this->energyPoints = energyPoints;
}
void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->attackDamage = attackDamage;
}

/// @brief : new name setters for ScavTrap

void	ClapTrap::setName(str name)
{
	this->name = name;
}

str		ClapTrap::getName() const
{
	return (this->name);
}

//////////////////////
// Member Functions //
//////////////////////

void	ClapTrap::attack(const str &target)
{
	if (this->energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else
		std::cout << "ClapTrap " << this->name << " doesn't have enough energy points !" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Ouch ! " << this->name << " lose " << amount << " hp !" << std::endl;
	this->hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " repair itself and gain " << amount << " hp !" << std::endl;
	this->hitPoints += amount;
}
