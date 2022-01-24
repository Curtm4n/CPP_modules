/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:17:19 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 22:36:59 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap default constructor" << std::endl;
	_name = "default";
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "I'm the ultimate robot ! mouhahahaha" << std::endl;
	_name = name;
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap & src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap copy constructor" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

std::string	DiamondTrap::getName(void) const
{
	return (this->_name);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name: " << this->getName() << ", ClapTrap name: "
		<< ClapTrap::getName() << std::endl;
}

DiamondTrap &	DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if ( this != &rhs )
	{
		_name = rhs.getName();
		_hitPoint = rhs.getPoints(1);
		_energyPoint = rhs.getPoints(2);
		_attackDamage = rhs.getPoints(3);
	}
	return (*this);
}
