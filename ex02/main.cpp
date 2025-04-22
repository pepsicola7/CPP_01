/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:59:59 by peli              #+#    #+#             */
/*   Updated: 2025/04/22 17:41:33 by peli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	stringPTR(std::string brain)
{
	brain = "Brain is changed";
}

void	stringREF(std::string &brain)
{
	brain = "Brain is changed";
}

int	main()
{
	std::string	brain;
	
	brain = "HI THIS IS BRAIN";
	std::cout << "The memory address of the string variable : " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR : " << (void*)&stringPTR << std::endl;
	std::cout << "The memory address held by stringREF : " << (void*)&stringREF << std::endl;
	std::cout << "---------------------------------------" << std::endl;
	std::cout << "The value of the string variable : " << brain << std::endl;
	stringPTR(brain);
	std::cout << "The value pointed to by stringPTR : " << brain << std::endl;
	stringREF(brain);
	std::cout << "The value pointed to by stringREF : " << brain << std::endl;
	return (0);
}