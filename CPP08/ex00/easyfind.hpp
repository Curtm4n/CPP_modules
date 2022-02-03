/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:10:54 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/03 18:32:52 by cdapurif         ###   ########.fr       */
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

	it = find(container.begin(), container.end(), value);
	return (it);
}

#endif
