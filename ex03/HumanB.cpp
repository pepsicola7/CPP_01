/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:49:34 by peli              #+#    #+#             */
/*   Updated: 2025/04/22 20:23:21 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string nameB)
{
	this->nameB = nameB;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	std::cout << nameB << " attacks with their " << Weapon::setType << std::endl;
}

void	HumanB::setWeapon(Weapon WeaponB)
{
	
}

#endif