/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:00:26 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 17:19:25 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(str name);
		FragTrap(FragTrap const &src);
		FragTrap &operator=(FragTrap const &ptref);
		~FragTrap();
		// Member Function
		void	attack(const str &target);
		void	highFivesGuys(void);
	private:
};

#endif
