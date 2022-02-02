/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 22:47:29 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/03 00:00:02 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{

public:

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	MutantStack<T>(void) {}
	MutantStack<T>(MutantStack<T> const & src) { this->c = src.c; }
	~MutantStack<T>(void) {}

	MutantStack<T> &	operator=(MutantStack<T> const & rhs)
	{
		if (this == &rhs)
			return (*this);
		this->c = rhs.c;
		return (*this);
	}

	iterator	begin(void) { return (std::stack<T>::c.begin()); }
	iterator	end(void) { return (std::stack<T>::c.end()); }

	const_iterator	begin(void) const { return (std::stack<T>::c.begin()); }
	const_iterator	end(void) const { return (std::stack<T>::c.end()); }

	reverse_iterator	rbegin(void) { return (std::stack<T>::c.rbegin()); }
	reverse_iterator	rend(void) { return (std::stack<T>::c.rend()); }

	const_reverse_iterator	rbegin(void) const { return (std::stack<T>::c.rbegin()); }
	const_reverse_iterator	rend(void) const { return (std::stack<T>::c.rend()); }

};

#endif
