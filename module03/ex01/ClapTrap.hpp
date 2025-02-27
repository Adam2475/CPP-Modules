/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:44:16 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 16:46:52 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/// @brief : header protection
#pragma once

#ifndef _CLAPTRAP_HPP_
#define _CLAPTRAP_HPP_

#include <iostream>
#include <string>
#include <iomanip>

typedef std::string str;

class ClapTrap
{
	public:
		ClapTrap();				// Default constructor
		ClapTrap(str name);		// Costructor overload (name)
		ClapTrap(ClapTrap const &src);	// Copy constructor
		ClapTrap &operator=(ClapTrap const &rSym); // Assignement overload
		~ClapTrap();			// Default destructor

		/// @brief : new getter and setter for name
		str		getName() const;
		void	setName(str name);
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
		/// @note : need virtual function to modify it in child classes
		//			without redefining.
	
	/// @note with private keyword 
	//private: 
	protected:
		str	name;
		int	hitPoints;
		int	energyPoints;
		int	attackDamage;
};

#endif
