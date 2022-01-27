/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:55:43 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/27 00:36:43 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	~MateriaSource(void);

	MateriaSource &	operator=(MateriaSource const & rhs);

	virtual void		learnMateria(AMateria *m);
	virtual AMateria	*createMateria(std::string const & type);

private:

	AMateria	*data[4];

};

#endif
