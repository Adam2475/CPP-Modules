/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 14:54:37 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:38:45 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const &src);
		~Dog();

		Dog &	operator=(Dog const &rSym);

		void	makeSound() const;
	private:
		str		_type;
};
