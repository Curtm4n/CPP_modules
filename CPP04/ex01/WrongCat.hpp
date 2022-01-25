/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:44:27 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 00:28:10 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:

	WrongCat(void);
	WrongCat(WrongCat const & src);
	virtual ~WrongCat(void);

	WrongCat &	operator=(WrongCat const & rhs);

	void	makeSound(void) const;

};

#endif
