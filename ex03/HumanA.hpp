/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:49:17 by peli              #+#    #+#             */
/*   Updated: 2025/04/23 14:52:56 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	nameA;
		Weapon&	weaponA;
	public:
		HumanA(std::string nameA, Weapon& weaponA);
		void	attack();
		~HumanA();
};

	