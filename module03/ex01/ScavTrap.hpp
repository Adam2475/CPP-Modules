/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:49:46 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/23 15:49:47 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SCAVTRAP_HPP_
#define _SCAVTRAP_HPP_

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(str name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap & operator=(ScavTrap const &rSym);
		
		void	attack(const str &target);
		void	guardGate() const;
	private:
};

#endif