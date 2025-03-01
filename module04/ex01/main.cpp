/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:37:47 by adapassa          #+#    #+#             */
/*   Updated: 2025/03/01 16:22:50 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	int arr_size = 4;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	Animal* animals[arr_size];

	for (int k = 0; k < (arr_size / 2); k++)
		animals[k] = new Dog();
	for (int k = (arr_size / 2); k < arr_size; k++)
		animals[k] = new Cat();
	for ( int k = 0; k < arr_size; k++)
		delete animals[k];

	delete j;	//should not create a leak
	delete i;
}

// int main()
// {
// 	std::cout << "---- Testing Animal Class ----" << std::endl;
// 	Animal a;
// 	std::cout << "Animal sound: ";
// 	a.makeSound();
// 	std::cout << "Type: " << a.getType() << std::endl;

// 	std::cout << "\n---- Testing Dog Class ----" << std::endl;
// 	Dog d;
// 	std::cout << "Dog sound: ";
// 	d.makeSound();
// 	std::cout << "Type: " << d.getType() << std::endl;

// 	std::cout << "\n---- Testing Cat Class ----" << std::endl;
// 	Cat c;
// 	std::cout << "Cat sound: ";
// 	c.makeSound();
// 	std::cout << "Type: " << c.getType() << std::endl;

// 	return 0;
// }

// int main()
// {
// 	std::cout << "\n---- Testing Polymorphism ----" << std::endl;
// 	Animal* animals[2];

// 	animals[0] = new Dog();
// 	animals[1] = new Cat();

// 	for (int i = 0; i < 2; i++) {
// 		std::cout << "Animal " << i << " sound: ";
// 		animals[i]->makeSound();
// 		delete animals[i];  // Ensure destructors are called properly
// 	}

// 	return 0;
// }