/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:16:14 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/17 18:53:42 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int n, std::string name)
{
	Zombie	*zombies;

	zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
		zombies[i].setName(name);
	return (zombies);
}
