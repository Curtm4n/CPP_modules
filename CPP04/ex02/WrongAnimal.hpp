/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:16:23 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 00:20:25 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

public:

	WrongAnimal(void);
	WrongAnimal(WrongAnimal const & src);
	virtual ~WrongAnimal(void);

	WrongAnimal &	operator=(WrongAnimal const & rhs);

	std::string		getType(void) const;
	void			makeSound(void) const;

protected:

	std::string	_type;

};

#endif
