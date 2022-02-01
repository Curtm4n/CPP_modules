/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:12:51 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/01 15:39:21 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>
void	aff(T & a)
{
	std::cout << a << " ";
}

template<typename T>
void	inc(T & a)
{
	a++;
}

template<typename T>
void	iter(T *array, unsigned int length, void (*f)(T &))
{
	for (unsigned int i = 0; i < length; i++)
		(*f)(array[i]);
}

#endif
