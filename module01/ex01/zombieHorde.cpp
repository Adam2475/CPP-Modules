/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:54:42 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/19 11:10:58 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int n, str name)
{
    int i = -1;
    Zombie *horde = new Zombie[n]; // allocate memory for n zombies
    while (++i < n)
    {
        horde[i].setName(name);
        horde[i].announce();
    }
    return (horde);
}