/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:58:58 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/20 20:38:03 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed(0)
{
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
}

Fixed::Fixed(const int i)
{
	this->_fixed = i << this->_bits;
}

Fixed::Fixed(const float f)
{
	this->_fixed = roundf(f * (1 << this->_bits));
}

Fixed::~Fixed(void)
{
}

Fixed &	Fixed::operator=(Fixed const & rhs)
{
	if (this != &rhs)
		this->_fixed = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const & rhs) const
{
	return (this->toFloat() > rhs.toFloat());
}

bool	Fixed::operator<(Fixed const & rhs) const
{
	return (this->toFloat() < rhs.toFloat());
}

bool	Fixed::operator>=(Fixed const & rhs) const
{
	return (this->toFloat() >= rhs.toFloat());
}

bool	Fixed::operator<=(Fixed const & rhs) const
{
	return (this->toFloat() <= rhs.toFloat());
}

bool	Fixed::operator==(Fixed const & rhs) const
{
	return (this->toFloat() == rhs.toFloat());
}

bool	Fixed::operator!=(Fixed const & rhs) const
{
	return (this->toFloat() != rhs.toFloat());
}

Fixed	Fixed::operator+(Fixed const & rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const & rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const & rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const & rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &	Fixed::operator++(void)
{
	this->_fixed++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);

	this->_fixed++;
	return (temp);
}

Fixed &	Fixed::operator--(void)
{
	this->_fixed--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_fixed--;
	return (temp);
}

Fixed &	Fixed::min(Fixed & lhs, Fixed & rhs)
{
	if (lhs.toFloat() < rhs.toFloat())
		return (lhs);
	else
		return (rhs);
}

const Fixed &	Fixed::min(const Fixed & lhs, const Fixed & rhs)
{
	if (lhs.toFloat() < rhs.toFloat())
		return (lhs);
	else
		return (rhs);
}

Fixed &	Fixed::max(Fixed & lhs, Fixed & rhs)
{
	if (lhs.toFloat() > rhs.toFloat())
		return (lhs);
	else
		return (rhs);
}

const Fixed &	Fixed::max(const Fixed & lhs, const Fixed & rhs)
{
	if (lhs.toFloat() > rhs.toFloat())
		return (lhs);
	else
		return (rhs);
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fixed) / (1 << this->_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixed >> this->_bits);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed = raw;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
