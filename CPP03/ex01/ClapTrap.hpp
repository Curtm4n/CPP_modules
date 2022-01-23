/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:44:41 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/23 13:24:14 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{

public:

	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	~ClapTrap(void);

	ClapTrap &	operator=(ClapTrap const & rhs);

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

	ClapTrap(void);

	std::string	_name;
	int			_hitPoint;
	int			_energyPoint;
	int			_attackDamage;

};

#endif
