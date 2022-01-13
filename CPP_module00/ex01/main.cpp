/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:13:40 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/13 17:20:43 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	display_info(void)
{
	std::cout << "You can type in the following commands:" << std::endl;
	std::cout << "ADD ---> Create a new contact in your phonebook" << std::endl;
	std::cout << "SEARCH ---> Display the current informations about the contacts" << std::endl;
	std::cout << "EXIT ---> Close the phonebook and destroy all the contact informations" << std::endl << std::endl;
}

std::string	toUpper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

void	add_contact(Phonebook *book, int index)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "first name: " && std::cin >> first_name;
	std::cout << "last name: " && std::cin >> last_name;
	std::cout << "nickname: " && std::cin >> nickname;
	std::cout << "phone number: " && std::cin >> phone_number;
	std::cout << "darkest secret: " && std::cin >> darkest_secret;
	book->contact[index - 1].set_info(index, first_name, last_name, nickname, phone_number, darkest_secret);
	int a = book->contact[index - 1].get_index();
       	std::cout << a << std::endl;
}

void	ft_phonebook(void)
{
	Phonebook	book;
	std::string	input;
	int		fail;
	int		contact_id;

	fail = 0;
	contact_id = 1;
	display_info();
	while (1)
	{
		std::cout << "Type in your command: " && std::cin >> input;
		input = toUpper(input);
		if (input == "EXIT")
			break ;
		else if (input == "SEARCH")
			std::cout << "search command" << std::endl;
		else if (input == "ADD")
		{
			if (contact_id > 8)
			{
				std::cout << "Your Phonebook cannot contain more than 8 contact, sorry" << std::endl;
				continue ;
			}
			add_contact(&book, contact_id);
			contact_id++;
		}
		else
		{
			fail++;
			std::cout << "This command doesn't exist or is badly formatted" << std::endl;
			if (fail == 5)
			{
				display_info();
				fail = 0;
			}
		}
	}
}

int	main(void)
{
	ft_phonebook();
	return (0);
}
