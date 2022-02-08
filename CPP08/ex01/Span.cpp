/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:29:43 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/08 19:51:50 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _max(0)
{
	if (Span::verbose)
		std::cout << "Span default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _max(n)
{
	if (Span::verbose)
		std::cout << "Span parameter constructor called" << std::endl;
}

Span::Span(Span const & src) : _max(src.getMax())
{
	if (Span::verbose)
		std::cout << "Span copy constructor called" << std::endl;
	_array = src.getArray();
}

Span::~Span(void)
{
	if (Span::verbose)
		std::cout << "Span destructor called" << std::endl;
}

Span &	Span::operator=(Span const & rhs)
{
	if (this == &rhs)
		return (*this);
	_array = rhs.getArray();
	_max = rhs.getMax();
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (this->size() >= _max)
		throw Span::fullContainer();
	this->_array.push_back(nb);
}

unsigned int	Span::shortestSpan(void)
{
	if (this->size() < 2)
		throw Span::notEnoughInt();

	//classic version

	/*std::vector<int>			vector = this->getArray();
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	it2;
	std::vector<int>::iterator	ite = vector.end();
	unsigned int	diff = UINT_MAX;
	for (it = vector.begin(); it != ite - 1; it++)
	{
		for (it2 = it + 1; it2 != ite; it2++)
		{
			if (static_cast<unsigned int>(abs(*it - *it2)) < diff)
				diff = abs(*it - *it2);
		}
	}*/

	//algorithm version

	std::vector<int>	diff(this->size());
	std::vector<int>	copy = this->getArray();

	sort(copy.begin(), copy.end());
	std::adjacent_difference(copy.begin(), copy.end(), diff.begin());
	unsigned int	res = *(min_element(diff.begin() + 1, diff.end()));
	return (res);
}

unsigned int	Span::longestSpan(void)
{
	if (this->size() < 2)
		throw Span::notEnoughInt();

	unsigned int		diff = UINT_MAX;
	std::vector<int>	vector = this->getArray();
	sort(vector.begin(), vector.end());
	diff = abs(*(vector.begin()) - *(vector.end() - 1));
	return (diff);
}

std::vector<int>	Span::getArray(void) const
{
	return (this->_array);
}

unsigned int	Span::getMax(void) const
{
	return (this->_max);
}

unsigned int	Span::size(void) const
{
	return (this->_array.size());
}

const char	*Span::fullContainer::what(void) const throw()
{
	return ("Cannot store any more number");
}

const char	*Span::notEnoughInt::what(void) const throw()
{
	return ("You need at least two elements");
}

bool	Span::verbose = false;
