/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:57:57 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/19 22:53:24 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>

class Karen
{

public:

	Karen(void);
	~Karen(void);
	void	complain(std::string level);
	void	announce_level(std::string level);

private:

	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);

};

#endif
