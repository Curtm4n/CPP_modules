/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:28:01 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/03 12:30:28 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*void	addRange(Span & sp, int nb, int start, int end)
{
	if (nb <= 0 || start > end)
		return ;
	srand(static_cast<unsigned>(time(0)));
	try
	{
		for (int i = 0; i < nb; i++)
			sp.addNumber(start + (rand() % (end - start + 1)));
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}	
}*/

/*void	addRange(Span & sp, int nb, int start, int value)
{
	if (nb <= 0)
		return ;
	(void)start;

	std::vector<int>	v = sp.getArray();
	
	v.insert(v.end(), nb, value);
	
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = v.end();
	
	try
	{
		for (it = v.begin() + sp.size(); it != ite; it++)
		{
			sp.addNumber(*it);
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}*/

void	addRange(Span & sp, int nb, int start, int end)
{
	if (nb <= 0 || start > end)
		return ;
	
	std::vector<int>	v = sp.getArray();
	std::vector<int>	v2;
	
	for (int i = start; i <= end; i++)
	{
		v2.push_back(i);
		--nb;
		if (!nb)
			break ;
	}
	
	v.insert(v.end(), v2.begin(), v2.end());
	
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = v.end();
	
	try
	{
		for (it = v.begin() + sp.size(); it != ite; it++)
		{
			sp.addNumber(*it);
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	printContent(Span & sp)
{
	std::vector<int>	v = sp.getArray();
	std::vector<int>::iterator	it;
	std::vector<int>::iterator	ite = v.end();
	for (it = v.begin(); it != ite; it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int	main(void)
{
	Span	sp(10);

	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	Span	b(sp);

	std::cout << b.shortestSpan() << std::endl;
	std::cout << b.longestSpan() << std::endl;

	printContent(b);
	addRange(b, 5, 40, 60);
	printContent(b);

	try
	{
		b.addNumber(45);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
