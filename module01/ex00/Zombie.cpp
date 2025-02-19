/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:05:07 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/19 10:12:51 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// definition - implementation

// The constructor initializes the name
Zombie::Zombie(str name) : name(name) {}

// the destructor prints when a zombie is destroyed.
Zombie::~Zombie() {
    std::cout << name << " has been destroyed." << std::endl;
}

//  the announce function prints the message
void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}