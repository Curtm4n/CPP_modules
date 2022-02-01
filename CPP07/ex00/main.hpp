/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:25:52 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/01 12:01:11 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	MAIN_TPP
# define MAIN_TPP

# include <iostream>

template<typename T>
void	swap(T & a, T & b)
{
	T	tmp = a;

	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
	return (a < b ? a : b);	
}

template<typename T>
T	max(T a, T b)
{
	return (a > b ? a : b);	
}

#endif
