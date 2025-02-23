/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:43:50 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/23 15:45:56 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {
	ClapTrap	Robin("Robin");
	ClapTrap	Romeo("Romeo");

	Robin.attack("Roméo");
	Romeo.takeDamage(Robin.getAttackDamage());
	Romeo.beRepaired(2);

	return 0;
}