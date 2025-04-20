/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:10:53 by peli              #+#    #+#             */
/*   Updated: 2025/04/20 16:17:58 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class	Zombie
{
	public:
	Zombie(std::string name);
	~Zombie();
	void	announce( void );
	
	private:
	std::string	name;
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif