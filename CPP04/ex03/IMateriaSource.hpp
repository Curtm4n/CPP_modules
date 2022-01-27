/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:50:07 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/26 23:55:36 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class AMateria;

class IMateriaSource
{

public:

	virtual ~IMateriaSource(void) {}
	virtual void		learnMateria(AMateria *m) = 0;
	virtual AMateria	*createMateria(std::string const & type) = 0;

};

#endif
