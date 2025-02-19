/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:13:06 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/19 10:24:48 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// this function creates a zombie on the heap and returns a pointer to it.
Zombie* newZombie(str name)
{
    return new Zombie(name);
}