/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 23:24:23 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/17 23:54:23 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class	HumanA
{

public:

	HumanA(std::string name, Weapon & weapon);
	~HumanA(void);
	void	attack(void) const;

private:

	std::string _name;
	Weapon	&	_weapon;
};

#endif
