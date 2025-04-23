/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:49:37 by peli              #+#    #+#             */
/*   Updated: 2025/04/23 14:18:50 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string nameA, Weapon& weaponA) : nameA(nameA), weaponA(weaponA) {}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << nameA << " attacks with their " << weaponA.getType() << std::endl;
}

#endif