/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:43:56 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 22:37:14 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	molo("Molo");

	std::cout << molo.getName() << std::endl;
	std::cout << molo.getPoints(1) << std::endl;
	std::cout << molo.getPoints(2) << std::endl;
	std::cout << molo.getPoints(3) << std::endl;
	molo.attack("Roger");
	molo.guardGate();
	molo.whoAmI();
	molo.highFivesGuys();
	return (0);
}
