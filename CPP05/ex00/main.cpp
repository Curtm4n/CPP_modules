/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:10:12 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/31 12:50:27 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << Green << "Valid test grade 120" << Reset << std::endl;
	try
	{
		Bureaucrat	roger("Roger", 120);

		std::cout << roger << std::endl << "Upgrade Roger" << std::endl;
		roger.upgrade();
		std::cout << roger << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << Red << "Invalid test grade 0" << Reset << std::endl;
	try
	{
		Bureaucrat	bob("bob", 0);

		std::cout << bob << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << Red << "Invalid test grade 200" << Reset << std::endl;
	try
	{
		Bureaucrat bob("Bob", 200);

		std::cout << bob << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << Red << "Invalid test grade 150 but downgrade" << Reset << std::endl;
	try
	{
		Bureaucrat bob("Bob", 150);

		std::cout << bob << std::endl;
		bob.downgrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << Red << "Invalid test grade 1 but upgrade" << Reset << std::endl;
	try
	{
		Bureaucrat bob("Bob", 1);

		std::cout << bob << std::endl;
		bob.upgrade();
		std::cout << bob << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
