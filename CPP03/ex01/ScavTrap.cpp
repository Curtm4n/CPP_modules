/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:02:14 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/23 22:17:19 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "Hello world, i'm a ScavTrap" << std::endl;
	_name = name;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Bye world, I'll miss you, hope you'll miss me too" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void	ScavTrap::attack(const std::string & target)
{
	if (!this->_energyPoint && this->_hitPoint)
		std::cout << this->_name << " is too tired to attack" << std::endl;
	if (this->_energyPoint && this->_hitPoint)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
			<< this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
