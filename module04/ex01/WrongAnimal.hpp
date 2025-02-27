/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:55:10 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:18:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef std::string str;

class WrongAnimal {
	public:
		WrongAnimal(str type);
		WrongAnimal();
		WrongAnimal(WrongAnimal const &src);
		~WrongAnimal();

		WrongAnimal &	operator=(WrongAnimal const &rSym);
		str			getType() const;
		void		setType();

		void	makeSound() const;
	protected:
		str	_type;
};
