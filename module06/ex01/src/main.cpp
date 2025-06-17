/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:49:45 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/23 17:50:07 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Serializer.hpp"
#include <iostream>

int main() {
    Data original;
    original.id = 42;
    original.name = "Example";
    original.value = 3.14;

    std::cout << "Original pointer : " << &original << std::endl;
    std::cout << "Original values  : " << original.id << ", " << original.name << ", " << original.value << std::endl;

    uintptr_t raw = Serializer::serialize(&original);
    Data* copy = Serializer::deserialize(raw);

    std::cout << "Deserialized pointer : " << copy << std::endl;
    std::cout << "Deserialized values  : " << copy->id << ", " << copy->name << ", " << copy->value << std::endl;

    // if (copy == &original)
    //     std::cout << "Pointers match: Serialization/Deserialization successful" << std::endl;
    // else
    //     std::cout << "Pointers do not match!" << std::endl;

    return 0;
}