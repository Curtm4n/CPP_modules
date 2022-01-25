/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:14:12 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 15:51:32 by cdapurif         ###   ########.fr       */
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
	Dog	maiya;

	maiya.setBrainIdeas(0, "hello");
	Dog	sati = maiya;
	sati.setBrainIdeas(1, "world");
	std::cout << sati.getBrainIdeas(0) << " " << sati.getBrainIdeas(1) << std::endl;
	std::cout << sati.getType() << std::endl;

	return (0);
}

/*int	main(void)
{
	//Animal part ------------------------------------------------------------------------------
	std::cout << Green << "Creating and testing an Animal: " << Reset << std::endl << std::endl;
	
	Animal			*meta = new Animal();
	
	std::cout << "basic noise of an Animal: ";
	meta->makeSound();
	std::cout << std::endl;
	
	std::cout << std::endl << Red << "Destroying my Animal" << Reset << std::endl;
	delete meta;
	

	//Dog part ---------------------------------------------------------------------------------
	std::cout << std::endl << Green << "Creating and testing a Dog: " << Reset
		<< std::endl << std::endl;
	
	const Animal		*j = new Dog();
	
	std::cout << j->getType() << " make the sound: ";
	j->makeSound();
	
	std::cout << std::endl << Red << "Destroying my Dog" << Reset << std::endl;
	delete j;
	
	
	//Cat part ----------------------------------------------------------------------------------
	std::cout << std::endl << Green << "Creating and testing a Cat: " << Reset
		<< std::endl << std::endl;
	
	const Animal		*i = new Cat();
	
	std::cout << i->getType() << " make the sound: ";
	i->makeSound();
	
	std::cout << std::endl << Red << "Destroying my Cat" << Reset << std::endl;
	delete i;
	
	
	//WrongCat part -----------------------------------------------------------------------------
	std::cout << std::endl << Green << "Creating and testing a WrongCat: " << Reset
		<< std::endl << std::endl;
	
	const WrongAnimal	*k = new WrongCat();
	
	std::cout << k->getType() << " make the sound: ";
	k->makeSound();
	std::cout << std::endl;
	
	std::cout << std::endl << Red << "Destroying my WrongCat" << Reset << std::endl;
	delete k;

	return (0);
}*/
