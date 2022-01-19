/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:04:34 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/19 22:09:06 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "I would like to file a complaint 💅" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "You will hear from my lawyer 😡" << std::endl;
}

void	Karen::complain(std::string level)
{
	std::string	complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void		(Karen::*complain[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (complaints[i] == level)
			(this->*complain[i])();
	}
}

void	Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my &XL-double-cheese-triple-pickle special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
