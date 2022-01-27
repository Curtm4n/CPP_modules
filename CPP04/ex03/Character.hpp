/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:04:43 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/27 13:57:47 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{

public:

	Character(void);
	Character(std::string name);
	Character(Character const & src);
	virtual ~Character(void);

	Character &	operator=(Character const & rhs);

	virtual std::string const &	getName(void) const;
	virtual void				equip(AMateria *m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter & target);

private:

	std::string	_name;
	AMateria	*inventory[4];
	AMateria	*ground[10];

};

#endif
