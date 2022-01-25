/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:44:27 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 15:49:55 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{

public:

	Dog(void);
	Dog(Dog const & src);
	virtual ~Dog(void);

	Dog &	operator=(Dog const & rhs);

	void		makeSound(void) const;
	std::string	getBrainIdeas(int i) const;
	void		setBrainIdeas(int i, std::string id);

private:

	Brain	*brain;

};

#endif
