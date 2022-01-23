/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 23:41:43 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/23 13:02:09 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap(void);

	ScavTrap &	operator=(ScavTrap const & rhs);

	void	attack(const std::string & target);
	void	guardGate(void);

};

#endif
