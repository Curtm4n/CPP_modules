/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:16:23 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 21:09:55 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{

public:

	Animal(void);
	Animal(Animal const & src);
	virtual ~Animal(void);

	Animal &	operator=(Animal const & rhs);

	std::string		getType(void) const;
	virtual void	makeSound(void) const = 0;

protected:

	std::string	_type;

};

#endif
