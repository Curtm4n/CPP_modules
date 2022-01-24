/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:43:56 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 18:11:55 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	roger("Roger");

	roger.guardGate();
	roger.attack("Bob");
	roger.takeDamage(20);
	roger.beRepaired(10);
	return (0);
}
