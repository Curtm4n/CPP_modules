/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:23:07 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/26 22:55:28 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
//# include "ICharacter.hpp"

class Ice : public AMateria
{

public:

	Ice(void);
	Ice(Ice const & src);
	virtual ~Ice(void);

	Ice &	operator=(Ice const & src);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter & target);

};

#endif
