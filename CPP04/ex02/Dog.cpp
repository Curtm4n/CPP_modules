/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:48:26 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 00:06:52 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog default constructor called" << std::endl;
	brain = new Brain();
	_type = "Dog";
}

Dog::Dog(const Dog & src) : Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	brain = 0;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	std::string	tmp;

	if (this == &rhs)
		return (*this);
	delete brain;
	brain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		tmp = rhs.brain->getIdeas(i);
		this->brain->setIdeas(i, tmp);
	}
	_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf wouf !" << std::endl;
}

std::string	Dog::getBrainIdeas(int i) const
{
	return (this->brain->getIdeas(i));
}

void	Dog::setBrainIdeas(int i, std::string id)
{
	this->brain->setIdeas(i, id);
}
