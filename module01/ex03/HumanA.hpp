/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:51:57 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/20 11:52:22 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		str name;
		Weapon &weapon;
	public:
		// Constructors
		HumanA(str name, Weapon &weapon);
		~HumanA();
		// Methods
		void attack();
};

#endif