/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:58:17 by peli              #+#    #+#             */
/*   Updated: 2025/04/28 13:58:20 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>


class	Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
	void complain( std::string level );;
};


