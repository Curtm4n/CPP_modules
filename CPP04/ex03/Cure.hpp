/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 21:23:07 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/26 22:55:36 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
//# include "ICharacter.hpp"

class Cure : public AMateria
{

public:

	Cure(void);
	Cure(Cure const & src);
	virtual ~Cure(void);

	Cure &	operator=(Cure const & src);

	virtual AMateria	*clone(void) const;
	virtual void		use(ICharacter & target);

};

#endif
