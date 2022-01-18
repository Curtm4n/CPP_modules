/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:33:05 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/18 11:48:43 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	if (this->_weapon)
	{
		std::cout << this->_name << " attacks with his ";
		std::cout << this->_weapon->getType() << std::endl;
	}
	else
		std::cout << this->_name << " doesn't have a weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon & weapon)
{
	this->_weapon = &weapon;
}
