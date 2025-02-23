/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:05:07 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/23 14:55:42 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// definition - implementation

// default constructor
Zombie::Zombie()
{
    std::cout << "new zombie created" << std::endl;
}

// the destructor prints when a zombie is destroyed.
Zombie::~Zombie() {
    std::cout << name << " has been destroyed." << std::endl;
}

//  the announce function prints the message
void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(str name)
{
    this->name = name;
}
