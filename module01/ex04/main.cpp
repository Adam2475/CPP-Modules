/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 14:54:38 by adapassa          #+#    #+#             */
/*   Updated: 2025/02/23 14:56:52 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

typedef std::string str;

// replaces all occurrence of fi
void	getNewLine(str &line, str string1, str string2)
{
	size_t	startPos = 0;

	while ((startPos = line.find(string1, startPos)) != str::npos)
	{
		line = line.substr(0, startPos) + string2 + line.substr(startPos + string1.length());
		startPos += string2.length();
	}
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cout << "Usage : ./replace file_in string1 string2"; return 0;
	}
	
	str				in_file = av[1];
	str				string1 = av[2];
	str				string2 = av[3];
	str				line;
	str				out_file = in_file + ".replace";

	std::ifstream	input(in_file.c_str());
	std::ofstream	output(out_file.c_str());
	
	if (input.is_open())
	{
		while (std::getline(input, line))
		{
			getNewLine(line, string1, string2);
			output << line;
			if (!input.eof())
				output << std::endl;
		}
		input.close();
		output.close();
	}
	else
		std::cout << "Error: cannot open file." << std::endl;
	return 0;
}
