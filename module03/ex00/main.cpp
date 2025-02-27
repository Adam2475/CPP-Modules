/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:43:50 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 15:09:02 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Creation of the basic class to inherit from
int	main()
{
	ClapTrap	Hero("Cloud");
	ClapTrap	Enemy("Barret");

	Hero.attack("Barret");
	Enemy.takeDamage(Enemy.getAttackDamage());
	

	Hero.attack("Barret");
	Enemy.takeDamage(Enemy.getAttackDamage());

	Enemy.beRepaired(2);

	return 0;
}
