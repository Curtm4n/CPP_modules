/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:59:25 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/24 15:07:42 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap(void);

	FragTrap &	operator=(FragTrap const & rhs);

	void	highFivesGuys(void);

};

#endif
