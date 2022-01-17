/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:24:09 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/17 18:57:27 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{

public:

	Zombie(void);
	~Zombie(void);

	void	announce(void) const;
	void	setName(std::string name);

private:

	std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
