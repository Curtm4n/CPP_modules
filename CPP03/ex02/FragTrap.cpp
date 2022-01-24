/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:10:25 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 15:27:21 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Heeeeeeere comes the FragTrap !!!" << std::endl;
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "this is my copy constructor" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "You'll miss me, trust me" << std::endl;
}

FragTrap &	FragTrap::operator=(FragTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoint = rhs.getPoints(1);
		this->_energyPoint = rhs.getPoints(2);
		this->_attackDamage = rhs.getPoints(3);
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::string	ret;

	std::cout << "Hi minion, do you wanna high five ? (y/n) ";
	std::cin >> ret;
	if (ret == "y" || ret == "yes")
		std::cout << "HIGH FIVE BUDDY" << std::endl;
	else if (ret == "n" || ret == "no")
		std::cout << "Oh.. You're mean" << std::endl;
	else
		std::cout << "Well.. was that your answer ?.." << std::endl;
}
