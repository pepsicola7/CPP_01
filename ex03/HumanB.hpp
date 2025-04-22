/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:49:23 by peli              #+#    #+#             */
/*   Updated: 2025/04/22 20:13:47 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANB_HPP
#define	HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	nameB;
	Weapon	WeaponB;
public:
	HumanB(std::string nameB);
	~HumanB();
	void	attack();
	void	setWeapon(Weapon WeaponB);
};

#endif
