/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:23:07 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/26 23:15:28 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

public:

	AMateria(void);
	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria(void);

	AMateria &	operator=(AMateria const & src);

	std::string const & getType(void) const;

	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter & target);

protected:

	std::string	_type;

};

#endif
