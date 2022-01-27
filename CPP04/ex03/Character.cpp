/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:43:22 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/26 23:22:31 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("John Doe")
{
	std::cout << "Character default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character parameter constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
}

Character::Character(Character const & src)
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = 0;
	*this = src;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->inventory[i];
}

Character &	Character::operator=(Character const & rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		delete this->inventory[i];
		if (rhs.inventory[i])
			this->inventory[i] = rhs.inventory[i]->clone();
		else
			this->inventory[i] = 0;
	}
	return (*this);
}

std::string const &	Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == 0)
		{
			this->inventory[i] = m;
			return ;
		}
	}
	std::cout << "Inventory full, Materia not equipped" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "Incorrect index" << std::endl;
	else
	{
		if (this->inventory[idx])
		{
			delete this->inventory[idx];//a changer, ne doit pas etre delete tout de suite
			this->inventory[idx] = 0;
		}
		else
			std::cout << "There's no Materia in this inventory spot" << std::endl;
	}
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3)
		std::cout << "Incorrect index" << std::endl;
	else
	{
		if (this->inventory[idx])
			this->inventory[idx]->use(target);
		else
			std::cout << "There's no Materia in this inventory spot" << std::endl;
	}
}
