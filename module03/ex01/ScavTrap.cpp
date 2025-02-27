/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:49:18 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 16:51:20 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

////////////////////////////////
// Costructors Implementation //
////////////////////////////////

// Inherited the ClapTrap Class
ScavTrap::ScavTrap(str name) : ClapTrap()
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	std::cout << "ScavTrap \"" << name << "\" was created with :" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "HP : " << this->hitPoints << std::endl;
	std::cout << "Energy Points : " << this->energyPoints << std::endl;
	std::cout << "Attack Damage : " << this->attackDamage << std::endl;
	std::cout << "--------------------" << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src.getName())
{
	*this = src;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Evil ScavTrap " << this->name << " destroyed." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &rSym)
{
	if (this != &rSym)
	{
		this->name = rSym.getName();
		this->hitPoints = rSym.getHitPoints();
		this->energyPoints = rSym.getEnergyPoints();
		this->attackDamage = rSym.getAttackDamage();
	}
	return (*this);
}

//////////////////////
// Member Functions //
//////////////////////

void	ScavTrap::attack(const str &target)
{
	std::cout << "Evil ScavTrap " << this->name << " go for broke " << target << " causing him " << this->attackDamage << " attack damage" << std::endl;
}

void	ScavTrap::guardGate() const
{
	std::cout << "Evil ScavTrap " << this->name << " enter in protected mode !" << std::endl;
}
