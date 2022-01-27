/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 00:36:51 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/27 01:14:53 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->data[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->data[i] = 0;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		delete this->data[i];
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		delete this->data[i];
		if (rhs.data[i])
			this->data[i] = rhs.data[i]->clone();
		else
			this->data[i] = 0;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->data[i] == 0)
		{
			this->data[i] = m;
			return ;
		}
	}
	std::cout << "MateriaSource cannot learn more materia" << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->data[i] && this->data[i]->getType() == type)
			return (this->data[i]->clone());
	}
	std::cout << "Unknown materia type" << std::endl;
	return (0);
}
