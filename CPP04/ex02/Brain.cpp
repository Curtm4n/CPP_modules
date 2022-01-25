/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:42:14 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 13:06:42 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.getIdeas(i);
	}
	return *this;
}

std::string	Brain::getIdeas(int i) const
{
	return (this->ideas[i]);
}

void	Brain::setIdeas(int i, std::string id)
{
	this->ideas[i] = id;
}
