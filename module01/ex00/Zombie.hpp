/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 09:59:43 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/19 10:27:48 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

typedef std::string str;

class Zombie
{
    private:
        str name;

    public:
        // costruttore
        Zombie(str name);
        // distruttore
        ~Zombie();
        // funzione pubblica di tutti gli zombie
        void announce();
};

// Function prototypes

Zombie *newZombie(str name);
void    randomChump(str name);

#endif