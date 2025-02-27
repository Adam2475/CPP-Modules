/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:30:26 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:18:19 by adapassa         ###   ########.fr       */
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
       
        Zombie(); // costruttore senza argomenti
        ~Zombie(); // distruttore 
        // funzione pubblica di tutti gli zombie
        void announce();
        void setName(str name);
};

// Implementing horde function
Zombie *zombieHorde(int n, str name);

#endif
