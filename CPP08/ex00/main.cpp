/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:07:28 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/02 17:19:56 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::cout << "Test with vector<int> {1, 2, 3, 42} we search 42"
		<< std::endl << std::endl;
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(42);

	std::vector<int>::const_iterator	it = easyfind(v, 42);
	if (it == v.end())
		std::cout << "not found" << std::endl;
	else
		std::cout << *it << std::endl;

	std::cout << std::endl <<"Test with list<int> {1, 2, 3, 42} we search 4"
		<< std::endl << std::endl;
	std::list<int>	l;

	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(42);

	std::list<int>::const_iterator	i = easyfind(l, 4);
	if (i == l.end())
		std::cout << "not found" << std::endl;
	else
		std::cout << *i << std::endl;
	return(0);
}
