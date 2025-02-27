/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:43:50 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 17:24:46 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

// Fuckin include HPP not CPP!!!!!

// Inherits from base class and adds new values

int	main()
{
	ClapTrap	Hero("Cloud");
	ClapTrap	Enemy("Barret");

	ScavTrap	Boss("Sephiroth");

	FragTrap	Final("Aerosorvegliante");

	// Hero.attack("Barret");
	// Enemy.takeDamage(Enemy.getAttackDamage());
	// Enemy.beRepaired(2);

	Boss.attack("Cloud");

	Final.attack("Barret");

	Final.highFivesGuys();

	return (0);
}
