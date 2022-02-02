/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:28:47 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/02 20:16:11 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <cstdlib>
# include <climits>

class Span
{

public:

	Span(void);
	Span(unsigned int n);
	Span(Span const & src);
	virtual ~Span(void);

	Span &	operator=(Span const & rhs);

	void				addNumber(int nb);
	unsigned int		shortestSpan(void);
	unsigned int		longestSpan(void);
	std::vector<int>	getArray(void) const;
	int					getMax(void) const;
	int					size(void) const;

	static bool	verbose;

private:

	std::vector<int>	_array;
	int					_max;

public:

	class fullContainer : public std::exception
	{

		public:

			virtual const char	*what(void) const throw();

	};
	class notEnoughInt : public std::exception
	{

		public:

			virtual const char	*what(void) const throw();

	};

};

#endif
