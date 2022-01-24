/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:43:56 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 18:06:12 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	bob("Bob");

	bob.attack("Handsome Jack");
	bob.attack("Handsome Jack");
	bob.attack("Handsome Jack");
	bob.attack("Handsome Jack");
	bob.attack("Handsome Jack");
	bob.attack("Handsome Jack");
	bob.attack("Handsome Jack");
	bob.attack("Handsome Jack");
	bob.attack("Handsome Jack");
	bob.takeDamage(9);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.attack("Handsome Jack");
	bob.takeDamage(12);
	bob.attack("Handsome Jack");
	bob.beRepaired(1);
	bob.takeDamage(12);
	return (0);
}
