/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 13:02:14 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 14:39:49 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Hello world, i'm a ScavTrap" << std::endl;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "Derived copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Bye world, I'll miss you, hope you'll miss me too" << std::endl;
}

ScavTrap &	ScavTrap::operator=(ScavTrap const & rhs)
{
	if (this != &rhs)
	{
		_name = rhs.getName();
		_hitPoint = rhs.getPoints(1);
		_energyPoint = rhs.getPoints(2);
		_attackDamage = rhs.getPoints(3);
	}
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
