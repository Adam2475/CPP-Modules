/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:43:50 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 16:56:03 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Fuckin include HPP not CPP!!!!!

// Inherits from base class and adds new values

int	main()
{
	ClapTrap	Hero("Cloud");
	ClapTrap	Enemy("Barret");

	ScavTrap	Boss("Sephiroth");

	// Hero.attack("Barret");
	// Enemy.takeDamage(Enemy.getAttackDamage());
	// Enemy.beRepaired(2);

	Boss.guardGate();

	return (0);
}
