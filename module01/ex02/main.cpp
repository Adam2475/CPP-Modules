/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 12:15:12 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:18:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

// typedef std::string str;

// just another syntax for address manipulation

///////////////////////////////////////////////////////////////////////////////////
// a pointer is a type of variable that stores a link to another object
// they allow to reference the same object without copying it
//..
// when we dereference a pointer we look at what's in the address pointed by it
////////////////////////////////////////////////////////////////////////////////////

int main()
{
	std::string holder = "HI THIS IS BRAIN";
	std::string *stringPTR = &holder; // pointer get the dereferenced value of holder
								// es: holds a pointer to the address of holder
	std::string &stringREF = holder; // points at the value of holder
								// es: holds the reference of the value of holder
	
	std::cout << "string's address :" << &holder << std::endl; // print the address
	std::cout << "string's ptr adress : " << &stringPTR << std::endl;
	//std::cout << "string's ptr adress without end: " << stringPTR << std::endl;
	std::cout << "string's ref adress : " << &stringREF << std::endl;

	std::cout << "string's value : " << holder << std::endl;
	std::cout << "string's ptr value : " << *stringPTR << std::endl;
	std::cout << "string's ref value : " << stringREF << std::endl;
}
