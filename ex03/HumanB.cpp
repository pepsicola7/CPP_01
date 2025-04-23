/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:49:34 by peli              #+#    #+#             */
/*   Updated: 2025/04/23 15:27:47 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string nameB)
{
	this->nameB = nameB;
	this->WeaponB = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::attack()
{
	if (WeaponB)
		std::cout << nameB << " attacks with their " << WeaponB->getType() << std::endl;
	else
		std::cout << nameB << " has no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon& Weapon)
{
	this->WeaponB = &Weapon;
}
