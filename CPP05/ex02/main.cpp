/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:10:12 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/31 13:07:41 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	/*try
	{
		Bureaucrat jerry("Jerry", 3);
		ShrubberyCreationForm a("John Wick");

		jerry.signForm(a);
		jerry.executeForm(a);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}*/

	try
	{
		Bureaucrat jerry("Jerry", 3);
		RobotomyRequestForm a("John Wick");

		jerry.signForm(a);
		jerry.executeForm(a);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	/*try
	{
		Bureaucrat jerry("Jerry", 3);
		PresidentialPardonForm a("John Wick");

		jerry.signForm(a);
		jerry.executeForm(a);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}*/

	return (0);
}
