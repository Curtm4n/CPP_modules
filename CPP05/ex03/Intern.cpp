/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 13:06:06 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/29 14:08:22 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(Intern const & src)
{
	(void)src;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern &	Intern::operator=(Intern const & rhs)
{
	if (this == &rhs)
		return (*this);
	return (*this);
}

Form	*Intern::makeForm(std::string form, std::string target)
{
	int		i;
	std::string	forms[3] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	i = -1;
	while (++i < 3)
	{
		if (forms[i] == form)
			break;
	}
	if (i < 3)
		std::cout << "Intern creates " << forms[i] << " form" << std::endl;
	switch (i)
	{
		case 0: return (new ShrubberyCreationForm(target)); break;
		case 1: return (new RobotomyRequestForm(target)); break;
		case 2: return (new PresidentialPardonForm(target)); break;
		default: std::cout << "there's no " << form << " form" << std::endl;
	}
	return (0);
}
