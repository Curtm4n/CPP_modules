/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:14:12 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 16:39:59 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Colors.hpp"

int	main(void)
{
	Animal	*array[10];

	std::cout << Green << "Construction part" << Reset << std::endl << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if (i < 5)
		{
			std::cout << Yellow << "Creating Cat at index " << i << Reset << std::endl;
			array[i] = new Cat();
		}
		else
		{
			std::cout << Yellow << "Creating Dog at index " << i << Reset << std::endl;
			array[i] = new Dog();
		}
	}
	std::cout << std::endl << Red << "Destruction part" << Reset << std::endl << std::endl;
	for (int j = 0; j < 10; j++)
	{
		if (j < 5)
			std::cout << Red << "Destroying Cat at index " << j << Reset << std::endl;
		else
			std::cout << Red << "Destroying Dog at index " << j << Reset << std::endl;
		delete array[j];
	}
	return (0);
}
