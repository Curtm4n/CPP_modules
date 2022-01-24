/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:59:25 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 22:24:48 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	virtual ~FragTrap(void);

	FragTrap &	operator=(FragTrap const & rhs);

	void	highFivesGuys(void);

};

#endif
