/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:48:26 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 15:36:44 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
	brain = new Brain();
	_type = "Cat";
}

Cat::Cat(const Cat & src) : Animal(src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	std::string	tmp;

	if (this == &rhs)
		return (*this);
	brain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		tmp = rhs.brain->getIdeas(i);
		this->brain->setIdeas(i, tmp);
	}
	_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaaaaou !" << std::endl;
}

std::string	Cat::getBrainIdeas(int i) const
{
	return (this->brain->getIdeas(i));
}

void	Cat::setBrainIdeas(int i, std::string id)
{
	this->brain->setIdeas(i, id);
}
