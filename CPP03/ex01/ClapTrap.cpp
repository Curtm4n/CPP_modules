/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:54:29 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/23 13:40:21 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Am I empty ?" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Together we shall free Pandora! I will lead you into battle! I will destroy Handsome Jack with my bare hands! I will... Stairs!? NOOOOO!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "I know I mess up, and I'm 10 to the power of 100 of sorry about it" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
		*this = rhs;
	return (*this);
}

void	ClapTrap::attack(const std::string & target)
{
	if (!this->_energyPoint && this->_hitPoint)
		std::cout << "ClapTrap " << this->_name << " is too tired to attack" << std::endl;
	if (this->_energyPoint && this->_hitPoint)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
			<< this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoint--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead" << std::endl;
		return ;
	}
	std::cout << "Ouch, ClapTrap " << this->_name << " take " << amount << " points of damage" << std::endl;
	if ((int)amount >= this->_hitPoint)
		this->_hitPoint = 0;
	else
		this->_hitPoint -= amount;
	if (this->_hitPoint == 0)
		std::cout << "ClapTrap " << this->_name << " passed away, RIP little robot" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_energyPoint && this->_hitPoint)
		std::cout << this->_name << " is too tired to repair itself" << std::endl;
	if (this->_energyPoint && this->_hitPoint)
	{
		std::cout << this->_name << " is repairing itself [ +" << amount << " hit points ]" << std::endl;
		this->_hitPoint += amount;
		this->_energyPoint--;
		std::cout << this->_name << " now have " << this->_hitPoint << " hit points" << std::endl;
	}
}
