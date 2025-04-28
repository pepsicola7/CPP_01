/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:13:19 by peli              #+#    #+#             */
/*   Updated: 2025/04/28 16:16:54 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace_all(std::string line, std::string s1, std::string s2)
{
	size_t		i;
	std::string	result;

	i = 0;
	while (i < line.length())
	{
		if (line.substr(i, s1.length()) == s1)
		{
			result += s2;
			i += s1.length();
		}
		else
		{
			result += line[i];
			i++;
		}
	}
	return (result);
}

int	main(int argc, char **argv)
{
	std::string	s1;
	std::string	s2;
	std::string	filename;

	if (argc != 4)
	{
		std::cout << "Lack of the argument" << std::endl;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
	{
		std::cerr << "ERROR : S1 CANNOT BE EMPTY" << std::endl;
		return (1);
	}
	std::ifstream	input_file(filename.c_str());
	if (!input_file)
	{
		std::cerr << "Error : fail to open the file" << std::endl;
		return (1);
	}
	std::string out_filename = std::string(filename) + ".replace";
	std::ofstream	output_file(out_filename.c_str());
	if (!output_file)
	{
		std::cerr << "Error : fail to copy the file" << std::endl;
		return (1);
	}
	std::string	line;
	while (std::getline(input_file, line))
	{
		std::string replace_line = replace_all(line, s1, s2);
		output_file << replace_line << std::endl;
	}
	input_file.close();
	output_file.close();
	return (0);
}
