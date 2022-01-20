/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:47:23 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/20 20:36:57 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

public:

	Fixed(void);
	Fixed(const int n);
	Fixed(const float f);
	Fixed(Fixed const & src);
	~Fixed(void);

	Fixed &	operator=(Fixed const & rhs);
	bool	operator>(Fixed const & rhs) const;
	bool	operator<(Fixed const & rhs) const;
	bool	operator>=(Fixed const & rhs) const;
	bool	operator<=(Fixed const & rhs) const;
	bool	operator==(Fixed const & rhs) const;
	bool	operator!=(Fixed const & rhs) const;
	Fixed	operator+(Fixed const & rhs);
	Fixed	operator-(Fixed const & rhs);
	Fixed	operator*(Fixed const & rhs);
	Fixed	operator/(Fixed const & rhs);
	Fixed &	operator++();
	Fixed	operator++(int);
	Fixed &	operator--();
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed &			min(Fixed & lhs, Fixed & rhs);
	static const Fixed &	min(const Fixed & lhs, const Fixed & rhs);
	static Fixed &			max(Fixed & lhs, Fixed & rhs);
	static const Fixed &	max(const Fixed & lhs, const Fixed & rhs);

private:

	int					_fixed;
	static const int	_bits = 8;

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
