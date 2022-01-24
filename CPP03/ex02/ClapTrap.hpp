/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:44:41 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 22:23:16 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & src);
	virtual ~ClapTrap(void);

	ClapTrap &	operator=(ClapTrap const & rhs);

	std::string	getName(void) const;
	int			getPoints(unsigned int n) const;

	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

protected:

	std::string	_name;
	int			_hitPoint;
	int			_energyPoint;
	int			_attackDamage;

};

#endif
