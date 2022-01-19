/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:04:34 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/19 23:18:15 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	int	i;
	std::string	complaints[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	i = -1;
	while (++i < 4)
	{
		if (level == complaints[i])
			break ;
	}
	switch (i)
	{
		case 0: this->announce_level("DEBUG"); Karen::debug(); std::cout << std::endl;
		case 1: this->announce_level("INFO"); Karen::info(); std::cout << std::endl;
		case 2: this->announce_level("WARNING"); Karen::warning(); std::cout << std::endl;
		case 3: this->announce_level("ERROR"); Karen::error(); std::cout << std::endl; break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Karen::announce_level(std::string level)
{
	std::cout << "[ " + level + " ]" << std::endl;
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
