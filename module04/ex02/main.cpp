/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:37:47 by adapassa          #+#    #+#             */
/*   Updated: 2025/03/01 16:30:29 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

/* Abstract Classes:
  1) to make a class abstract we need to introduce at least 1 pure virtual function
  2) rename to AClass
  3) implement the pure virtual function in derived classes
*/

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	i->makeSound();
// 	j->makeSound();

// 	delete j;	//should not create a leak
// 	delete i;
// }


int main() {
    // AAnimal* a = new AAnimal(); // This will now give an error, as AAnimal is abstract

    Animal* animals[2];

    animals[0] = new Dog();
    animals[1] = new Cat();

	//Animal cane("doggo"); // Gives error cause it is an abstract class

    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();  // Calls the overridden makeSound method for Dog or Cat
        delete animals[i];
    }

    return 0;
}