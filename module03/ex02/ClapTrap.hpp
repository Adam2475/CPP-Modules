/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:44:16 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/24 12:50:03 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>
#include <string>
#include <iomanip>

typedef std::string str;

class ClapTrap {
	public:
		ClapTrap(str name);
		ClapTrap(ClapTrap const &src); // initializes basing on an existing object
		~ClapTrap();
		ClapTrap &operator=(ClapTrap const &rSym); // A copy assignment operator overload.
		// copies all values of one object into another object


		
		int		getHitPoints() const;
		int		getEnergyPoints() const;
		int		getAttackDamage() const;
		void	setHitPoints(int hitPoints);
		void	setEnergyPoints(int energyPoints);
		void	setAttackDamage(int attackDamage);

		void	attack(const str &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	
	private:
		str	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
};

#endif