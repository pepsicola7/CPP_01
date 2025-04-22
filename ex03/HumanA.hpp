/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:49:17 by peli              #+#    #+#             */
/*   Updated: 2025/04/22 20:10:07 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	nameA;
		Weapon	weaponA;
	public:
		HumanA(std::string nameA, Weapon weaponA);
		void	attack();
		~HumanA();
};

	