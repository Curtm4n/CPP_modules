/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 23:44:27 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 14:29:01 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{

public:

	Cat(void);
	Cat(Cat const & src);
	virtual ~Cat(void);

	Cat &	operator=(Cat const & rhs);

	void		makeSound(void) const;
	std::string	getBrainIdeas(int i) const;
	void		setBrainIdeas(int i, std::string id);


private:

	Brain	*brain;

};

#endif
