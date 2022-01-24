/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:21:25 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 00:05:43 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("")
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Destructor called" << std::endl;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs.getType();
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "This is the sound of.. well... an animal ??" << std::endl;
}
