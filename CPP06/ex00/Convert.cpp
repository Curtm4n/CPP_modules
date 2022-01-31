/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:10:05 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/31 23:21:02 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(void) : _litteral(42)
{
	if (Convert::verbose)
		std::cout << "Convert default constructor called" << std::endl;
}

Convert::Convert(std::string litteral)
{
	if (Convert::verbose)
		std::cout << "Convert parameter constructor called" << std::endl;
	if (litteral.length() == 3 && (litteral[0] == '\'' && litteral[2] == '\''))
		_litteral = static_cast<char>(litteral[1]);
	else
		_litteral = strtold(litteral.c_str(), 0);
}

Convert::Convert(Convert const & src)
{
	if (Convert::verbose)
		std::cout << "Convert copy constructor called" << std::endl;
	*this = src;
}

Convert::~Convert(void)
{
	if (Convert::verbose)
		std::cout << "Convert destructor called" << std::endl;
}

Convert &	Convert::operator=(Convert const & rhs)
{
	if (this == &rhs)
		return (*this);
	_litteral = rhs.getLitt();
	return (*this);
}

long double const &	Convert::getLitt(void) const
{
	return (this->_litteral);
}

void	Convert::toChar(void) const
{
	char	c = static_cast<char>(_litteral);

	if (_litteral >= 32 && _litteral <= 126)
		std::cout << "char: '" << c << "'" << std::endl;
	else if ((_litteral >= 0 && _litteral < 32) || _litteral == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
}

void	Convert::toInt(void) const
{
	long	i = static_cast<long>(_litteral);

	if (i >= INT_MIN && i <= INT_MAX)
		std::cout << "int: " << i << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void	Convert::toFloat(void) const
{
	float	f = static_cast<float>(_litteral);
	int		i = static_cast<int>(_litteral);

	std::cout << "float: " << f;
	if ((_litteral - i) == 0)
		std::cout << ".0f" << std::endl;
	else
		std::cout << "f" << std::endl;
}

void	Convert::toDouble(void) const
{
	double	d = static_cast<double>(_litteral);
	int		i = static_cast<int>(_litteral);

	std::cout << "double: " << d;
	if ((_litteral - i) == 0)
		std::cout << ".0" << std::endl;
	else
		std::cout << std::endl;
}


bool	Convert::verbose = false;
