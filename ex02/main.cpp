/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: peli <peli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:59:59 by peli              #+#    #+#             */
/*   Updated: 2025/04/28 14:25:18 by peli             ###   ########.fr       */
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
	std::string	&string_ref = brain;
	std::string	*string_ptr = &brain;

	
	std::cout << "The memory address of the string variable : " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR : " << string_ptr << std::endl;
	std::cout << "The memory address held by stringREF : " << &string_ref << std::endl;

	std::cout << "---------------------------------------" << std::endl;
	std::cout << "The value of the string variable : " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR : " << *string_ptr << std::endl;
	std::cout << "The value pointed to by stringREF : " << string_ref << std::endl;
	return (0);
}