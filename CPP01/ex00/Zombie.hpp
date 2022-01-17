/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 16:24:09 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/17 17:10:09 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{

public:

	Zombie(std::string name);
	~Zombie(void);

	void	announce(void) const;

private:

	std::string _name;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
