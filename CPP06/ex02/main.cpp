/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:06:39 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/31 16:04:53 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <exception>

class Base	{ public: virtual ~Base( void ) {} };
class A : public Base	{};
class B : public Base	{};
class C : public Base	{};

Base	*generate(void)
{
	int	i;

	srand(static_cast<unsigned>(time(0)));
	i = rand() % 3;
	switch (i)
	{
		case 0: return (new A()); break;
		case 1: return (new B()); break;
		case 2: return (new C()); break;
		default: std::cout << "will never print" << std::endl;
	}
	return (0);
}

void	identify(Base *p)
{
	A	*a = dynamic_cast<A *>(p);
	B	*b = dynamic_cast<B *>(p);
	C	*c = dynamic_cast<C *>(p);

	if (!b && !c)
		std::cout << "A" << std::endl;
	if (!a && !c)
		std::cout << "B" << std::endl;
	if (!a && !b)
		std::cout << "C" << std::endl;
}

void	identify(Base & p)
{
	try
	{
		A &	a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return ;
	}
	catch (std::exception & bc)
	{
		(void)bc;
	}
	try
	{
		B &	b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return ;
	}
	catch (std::exception & bc)
	{
		(void)bc;
	}
	try
	{
		C &	c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return ;
	}
	catch (std::exception & bc)
	{
		(void)bc;
	}
}

int	main(void)
{
	Base	*p;

	p = generate();
	identify(p);
	identify(*p);
	delete p;
	return (0);
}
