/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:00:05 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 17:24:05 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Constructors Implementation
FragTrap::FragTrap(str name) : ClapTrap()
{
	this->setName(name);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
	std::cout << "FragTrap \"" << name << "\" was created with :" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "HP : " << this->hitPoints << std::endl;
	std::cout << "Energy Points : " << this->energyPoints << std::endl;
	std::cout << "Attack Damage : " << this->attackDamage << std::endl;
	std::cout << "--------------------" << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " is detroyed " << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const &ptref)
{
	if (this != &ptref)
	{
		this->name = ptref.getName();
		this->hitPoints = ptref.getHitPoints();
		this->energyPoints = ptref.getEnergyPoints();
		this->attackDamage = ptref.getAttackDamage();
	}
	return *this;
}

void	FragTrap::attack(const str &target)
{
	std::cout << "FragTrap " << this->name << " attacks " << target << " causing him " << this->attackDamage << " damage" << std::endl;
}
// Member Functions
void	FragTrap::highFivesGuys()
{
	std::cout << this->name << " : Who wants a high-five ?" << std::endl;
}
