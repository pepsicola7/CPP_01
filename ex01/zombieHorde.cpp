/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:23:39 by peli              #+#    #+#             */
/*   Updated: 2025/04/22 16:31:00 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string	inttoString(int i)
{
	std::ostringstream oss;
	oss << i;
	return oss.str();
}

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	Zombie* horde = new Zombie[N];
	while (i != N)
	{
		horde[i].setzombie(name + inttoString(i + 1));
		i++;
	}
	return (horde);
}