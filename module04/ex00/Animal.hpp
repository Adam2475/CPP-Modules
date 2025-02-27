/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:27:38 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:26:12 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

typedef std::string str;

class Animal
{
	public:
		Animal(); // Default constructor
		Animal(str type); // Another costructor with given type
		Animal(Animal const &src); // Copy constructor
		~Animal(); // Default destructor
		Animal &operator=(Animal const &rSYm); // Assignment operator overload
		// Getter & Setter
		str get_type() const;
		void set_type();
		// Member functions
		virtual void makeSound() const; // virtual function can be overwritten by child class
	protected: // it can be accessed in derived classes but not directly outside
		str type;
};

/*Since Animal only contains a std::string, 
a default assignment operator would work fine, 
but if type were a dynamically allocated char*, 
a custom assignment operator would be necessary.*/
