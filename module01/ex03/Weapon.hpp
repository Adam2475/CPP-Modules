/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 15:28:05 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/23 14:55:42 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

typedef std::string str;

class Weapon {
	private:
		str type;
	public:
		// constructors
		Weapon();
		Weapon(str type);
		~Weapon();
		// member functions
		void setType(str type);
		const str &getType() const;
};

#endif
