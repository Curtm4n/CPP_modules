/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:43:56 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 15:25:18 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	roger("Roger");

	roger.attack("Bob");
	roger.takeDamage(20);
	roger.beRepaired(10);
	roger.highFivesGuys();
	return (0);
}
