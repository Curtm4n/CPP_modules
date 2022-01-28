/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:10:12 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 13:40:15 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <fstream>
#include <sstream>

int	main(void)
{
	std::ifstream ifs("ASCII_TREES");
	std::stringstream content;
	content << ifs.rdbuf();
	ifs.close();
	std::string str = content.str();
	std::cout << str << std::endl;
	try
	{
		Bureaucrat jerry("Jerry", 20);
		PresidentialPardonForm a("John Wick");

		jerry.signForm(a);
		PresidentialPardonForm b(a);
		std::cout << "ICI: " << b.getTarget() << std::endl;
		std::cout << b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
