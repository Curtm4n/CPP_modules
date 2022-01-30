/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 14:03:41 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/30 17:10:23 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <limits.h>
# include <cmath>
# include "Colors.hpp"

class Convert
{

public:

	Convert(void);
	Convert(std::string litteral);
	Convert(Convert const & src);
	~Convert(void);

	Convert &	operator=(Convert const & rhs);

	long double const &	getLitt(void) const;
	void				toChar(void) const;
	void				toInt(void) const;
	void				toFloat(void) const;
	void				toDouble(void) const;

	static bool	verbose;

private:

	long double	_litteral;

};

#endif
