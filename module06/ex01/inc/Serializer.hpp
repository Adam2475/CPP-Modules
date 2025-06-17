/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 17:46:34 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/23 17:51:51 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#define __STDC_LIMIT_MACROS
#include <iostream>
#include <iomanip>
#include <string>
#include "Data.hpp"
// not avaible in older c++ versions
// #include <cstdint>
#include <stdint.h>
#include <cstdlib>
#include <stdlib.h> 
#include <cfloat>
#include <limits>

// serialization and deserialization using a pointer-to-integer cast

// serialization: let's you take an object, put it on the disk and send it
//					trough a wire or a wireless transport mechanism
//
// then another computer receives it and deserialize it

// the mechanism consist in flatten the object to a one-dimensional
// stream of bytes

class Serializer
{
	private:
		Serializer();
		Serializer(const Serializer &src);
		~Serializer();
		Serializer &operator=(const Serializer &ref);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif