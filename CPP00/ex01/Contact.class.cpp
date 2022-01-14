/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:25:08 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/13 17:11:12 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::set_info(int index, std::string first, std::string last, std::string nickname, std::string number, std::string secret)
{
	this->index = index;
	this->first_name = first;
	this->last_name = last;
	this->nickname = nickname;
	this->phone_number = number;
	this->darkest_secret = secret;
}

int	Contact::get_index(void) const
{
	return (this->index);
}

std::string	Contact::get_info(int n) const
{
	if (n == 1)
		return (this->first_name);
	if (n == 2)
		return (this->last_name);
	if (n == 3)
		return (this->nickname);
	if (n == 4)
		return (this->phone_number);
	if (n == 5)
		return (this->darkest_secret);
	return ("false entry");
}
