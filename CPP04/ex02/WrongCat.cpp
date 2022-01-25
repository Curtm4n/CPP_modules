/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:48:26 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 00:27:27 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	if (this == &rhs)
		return (*this);
	_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaaaaou !" << std::endl;
}
