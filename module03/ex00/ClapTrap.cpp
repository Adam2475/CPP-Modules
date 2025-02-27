/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:44:45 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 16:32:40 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/////////////////////////////////
// Constructors Implementation //
/////////////////////////////////

ClapTrap::ClapTrap(str name) : name(name), hitPoints(10), energyPoints(1), attackDamage(1)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->name << " was destroy." << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const &ptref)
{
	if (this != &ptref)
	{
		this->hitPoints = ptref.getHitPoints();
		this->energyPoints = ptref.getEnergyPoints();
		this->attackDamage = ptref.getAttackDamage();
	}
	return *this;
}

///////////////////////
// Getters & Setters //
///////////////////////

int	ClapTrap::getHitPoints() const
{
	return (this->hitPoints);
}
int	ClapTrap::getEnergyPoints() const
{
	return (this->energyPoints);
}
int	ClapTrap::getAttackDamage() const
{
	return (this->attackDamage);
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

//////////////////////
// Member Functions //
//////////////////////

/**
* @brief : Method to attack a target
* @arg : The target to be attacked 
*/
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

/**
* @brief : Method to deal damage to a character
* @arg : The amount of damage to deal
*/
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Ouch ! " << this->name << " lose " << amount << " hp !" << std::endl;
	this->hitPoints -= amount;
}

/**
* @brief : Heals a character for "amount" of HP
* @arg : The amount of HP to heal
*/
void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->name << " repair itself and gain " << amount << " hp !" << std::endl;
	this->hitPoints += amount;
}
