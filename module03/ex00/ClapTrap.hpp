/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:44:16 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 14:13:55 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>
# include <iomanip>

typedef std::string str;

/////////////////////////
// Classes Declaration //
/////////////////////////
class ClapTrap
{
	public:
		ClapTrap(str name);					// Default Constructor
		ClapTrap(ClapTrap const &src);		// Copy Constructor
		ClapTrap &operator=(ClapTrap const &ptref); // Assignement Overload
		~ClapTrap();						// Default Destructor

		///////////////////////
		// Getters & Setters //
		///////////////////////
		int		getHitPoints() const;
		int		getEnergyPoints() const;
		int		getAttackDamage() const;
		void	setHitPoints(int hitPoints);
		void	setEnergyPoints(int energyPoints);
		void	setAttackDamage(int attackDamage);

		//////////////////////
		// Member Functions //
		//////////////////////
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
