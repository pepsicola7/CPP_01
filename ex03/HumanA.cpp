/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:49:37 by peli              #+#    #+#             */
/*   Updated: 2025/04/22 20:18:15 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "HumanA.hpp"

HumanA::HumanA(std::string nameA, Weapon weaponA)
{
	this->nameA = nameA;
	this->weaponA = weaponA;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << nameA << " attacks with their " << Weapon::getType << std::endl;
}

#endif