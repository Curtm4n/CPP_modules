/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:25:52 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/01 15:35:53 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WHATEVER_TPP
# define WHATEVER_TPP

# include <iostream>

template<typename T>
void	swap(T & a, T & b)
{
	T	tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T const &	min(T const & a, T const & b)
{
	return (a < b ? a : b);	
}

template<typename T>
T const &	max(T const & a, T const & b)
{
	return (a > b ? a : b);	
}

#endif
