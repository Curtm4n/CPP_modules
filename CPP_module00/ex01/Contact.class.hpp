/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:21:11 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/13 21:48:52 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>

class	Contact
{

public:

	Contact(void);
	~Contact(void);

	int			get_index(void) const;
	std::string	get_info(int n) const;
	void		set_info(int index, std::string first, std::string last, \
		std::string nickname, std::string number, std::string secret);

private:

	int		index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
};

#endif
