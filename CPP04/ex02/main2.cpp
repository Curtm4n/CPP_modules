/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:44:30 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 17:15:57 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	Dog	sparkle;

	sparkle.setBrainIdeas(0, "I'm");
	sparkle.setBrainIdeas(1, "a");
	
	Dog	scooby(sparkle);
	scooby.setBrainIdeas(2, "dog");
	for (int i = 0; i < 3; i++)
		std::cout << scooby.getBrainIdeas(i) << " ";
	std::cout << std::endl;
	return (0);
}
