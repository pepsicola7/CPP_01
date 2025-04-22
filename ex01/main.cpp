/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:24:12 by peli              #+#    #+#             */
/*   Updated: 2025/04/22 16:28:29 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv)
{
	Zombie *horde;
	int N;

	if (argc != 3)
	{
		std::cout << "please entry the number and the name of the zombie" << std::endl;
		return (1);
	}
	N = std::atoi(argv[1]);
	horde = zombieHorde(N, argv[2]);
	delete[] horde;
	return (0);
}