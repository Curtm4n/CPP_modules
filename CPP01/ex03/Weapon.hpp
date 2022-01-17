/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:44:14 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/17 23:31:39 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon
{

public:

	Weapon(std::string type);
	~Weapon(void);
	void	setType(std::string type);
	std::string const &	getType(void) const;

private:

	std::string	_type;

};

#endif
