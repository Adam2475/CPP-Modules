/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:05:43 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/27 12:18:19 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	Harl;

	std::cout << "Usage: ./harl [level], level must be specified in lower-case" << std::endl;
	
	
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments!" << std::endl;
		return (0);
	}
	
	Harl.complain(av[1]);
	return 0;
}
