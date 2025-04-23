/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:13:19 by peli              #+#    #+#             */
/*   Updated: 2025/04/23 20:04:16 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	parser_filename(const char* filename)
{
	std::string name(filename);

	if (name.length() >= 4 && name.substr(name.length() - 4) == ".txt")
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Lack of the argument" << std::endl;
		return (1);
	}
	if (parser_filename(argv[1]))
	{
		std::cout << "Error of the filename" << std::endl;
		return (1);
	}
	
	return (0);
}

