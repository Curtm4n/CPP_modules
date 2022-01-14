/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:12:46 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/13 22:53:38 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"

class	Phonebook
{

public:

	Phonebook(void);
	~Phonebook(void);

	Contact contact[8];
	void	display_contact(int nb) const;
	void	display_info(int nb) const;
};

#endif
