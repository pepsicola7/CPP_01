/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:49:27 by peli              #+#    #+#             */
/*   Updated: 2025/04/23 14:18:24 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class	Weapon
{
	private:
	std::string	type;
	public:
	Weapon(std::string	type);
	~Weapon();
	const std::string&	getType() const;
	void	setType(const std::string& newType);
};


