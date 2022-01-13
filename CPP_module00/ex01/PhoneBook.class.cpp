/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 13:05:31 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/13 23:49:18 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Phonebook::Phonebook(void)
{
	std::cout << "Welcome to this simple phonebook program !" << std::endl << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << "Goodbye, hope we'll see you soon 😁" << std::endl;
	return ;
}

void	Phonebook::display_contact(int nb) const
{
	int			len;
	std::string	entry;

	for (int i = 0; i < nb; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (j == 0)
			{
				for (int k = 0; k < 9; k++)
					std::cout << " ";
				std::cout << this->contact[i].get_index();
				std::cout << "|";
			}
			else
			{
				entry = this->contact[i].get_info(j);
				len = entry.length();
				if (len <= 10)
				{
					for (int l = 0; l + len < 10; l++)
						std::cout << " ";
					std::cout << entry + "|";
				}
				else
				{
					for (int m = 0; m < 9; m++)
						std::cout << entry[m];
					std::cout << ".|";
				}
			}
			if (j == 3)
				std::cout << std::endl;
		}
	}
}

void	Phonebook::display_info(int nb) const
{
	std::string	entry;
	std::string	input;
	int			index;

	while (1)
	{
		std::cout << "Type in the index of the entry you want to see" << std::endl;
		std::cout << "only the first char is taken (q to quit): " && std::cin >> input;
		input[0] = tolower(input[0]);
		if (input[0] == 'q')
			break ;
		if (input[0] >= '1' && input[0] <= '8')
		{
			index = input[0] - 48;
			if (index > nb)
			{
				std::cout << "This index doesn't exist yet try again" << std::endl;
				continue ;
			}
			std::cout << std::endl;
			for (int j = 1; j < 6; j++)
			{
				entry = this->contact[index - 1].get_info(j);
				std::cout << entry << std::endl;
			}
		}
		else
			std::cout << "Invalid entry, try again" << std::endl;
	}
}
