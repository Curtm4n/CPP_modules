/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 13:11:47 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/01 19:52:23 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int	array[] = {1, 2, 3};
	char	array2[] = {'a', 'b', 'c'};

	std::cout << "Print content of array(1, 2, 3) : ";
	::iter(array, 3, ::aff);

	std::cout << std::endl << "Print content of array2(a, b, c) : ";
	::iter(array2, 3, ::aff);

	std::cout << std::endl << "Increment content of array(1, 2, 3) : ";
	::iter(array, 3, ::inc);
	std::cout << array[0] << " " << array[1] << " " << array[2] << " ";

	std::cout << std::endl << "Increment content of array2(a, b, c) : ";
	::iter(array2, 3, ::inc);
	std::cout << array2[0] << " " << array2[1] << " " << array2[2] << " " << std::endl;

	return (0);
}
