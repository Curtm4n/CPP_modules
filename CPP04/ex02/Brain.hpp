/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:39:21 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/25 15:49:26 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{

public:

	Brain(void);
	Brain(Brain const & src);
	~Brain(void);

	Brain &	operator=(Brain const & rhs);

	std::string	getIdeas(int i) const;
	void		setIdeas(int i, std::string id);

private:

	std::string	ideas[100];

};

#endif
