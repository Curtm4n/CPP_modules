/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:22:44 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/17 18:59:52 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int		nb;
	Zombie	*zombies;

	nb = 3;
	zombies = zombieHorde(nb, "Marco");
	for (int i = 0; i < nb; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
