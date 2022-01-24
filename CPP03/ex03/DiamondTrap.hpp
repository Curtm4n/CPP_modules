/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:04:37 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 22:32:40 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	virtual ~DiamondTrap(void);

	DiamondTrap &	operator=(DiamondTrap const & rhs);

	std::string	getName(void) const;
	void		whoAmI(void);

private:

	std::string	_name;

};

#endif
