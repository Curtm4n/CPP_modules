/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:40:02 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/02 22:34:03 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	a(3);

	a.setElem(42);
	Array<int>	b;
	b = a;
	b.setElem(7);
	std::cout << b.getElem(0) << " " << b.getElem(1) << std::endl;
	std::cout << a.size() << " " << b.size() << std::endl;
	std::cout << b[0] << std::endl;
	try
	{
		std::cout << b[5] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: Out of range" << std::endl;
	}

	Array<char>	c;

	c.setElem('c');
	try
	{
		std::cout << c[0] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: Out of range" << std::endl;
	}

	Array<std::string>	d(2);

	d.setElem("Hello");
	d.setElem("friend");
	d.setElem("blabla");
	try
	{
		std::cout << d[0] << " " << d[1] << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Error: Out of range" << std::endl;
	}

	return (0);
}
