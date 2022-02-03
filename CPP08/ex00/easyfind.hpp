/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:10:54 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/03 11:04:23 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>
# include <algorithm>

template<typename T>
typename T::const_iterator	easyfind(T const & container, int value)
{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = container.end();

	for (it = container.begin(); it != ite; it++)
	{
		if (*it == value)
			break ;
	}
	return (it);
}

#endif
