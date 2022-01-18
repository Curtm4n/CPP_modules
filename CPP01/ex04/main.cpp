/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:25:04 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/18 15:51:21 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	ft_change(std::string content, std::string s1, std::string s2)
{

}

void	ft_replace(char **av)
{
	std::ifstream	ifs(av[0]);
	std::string	filename = av[0];
	std::string	s1 = av[1];
	std::string	s2 = av[2];
	std::string	content;

	if (s1.empty() || s2.empty())
	{
		std::cout << "s1 and/or s2 shouldn't be empty" << std::endl;
		return ;
	}
	filename += ".replace";
	ifs >> content;
	
	std::ofstream	ofs(filename);

	content = ft_change(content, s1, s2);	
	ofs << content << std::endl;
	ifs.close();
	ofs.close();
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error\nusage: ./replace filename s1 s2" << std::endl;
		return (1);
	}
	ft_replace(av + 1);
	return (0);
}
