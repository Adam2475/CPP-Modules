/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:15:19 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/19 10:16:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// This function creates a zombie on the stack and makes it announce itself.
void randomChump(str name)
{
    Zombie zombie(name);
    zombie.announce();
}