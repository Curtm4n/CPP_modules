/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:25:04 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/19 16:41:48 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

std::string	ft_change(std::string content, std::string s1, std::string s2)
{
	size_t		index;
	size_t		ret;

	index = 0;
	ret = 0;
	while ((ret = content.find(s1, index)) != std::string::npos)
	{
		content.insert(ret, s2);
		content.erase(ret + s2.length(), s1.length());
		index = ret + s2.length();
	}
	return (content);
}

bool	ft_error(std::ifstream *ifs, std::string s1, std::string s2)
{
	if (!ifs->is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (true);
	}
	if (s1.empty() || s2.empty())
	{
		std::cout << "s1 and/or s2 shouldn't be empty" << std::endl;
		ifs->close();
		return (true);
	}
	return (false);
}

int	ft_replace(std::string filename, std::string s1, std::string s2)
{
	std::ifstream		ifs(filename.c_str());
	std::stringstream	content;
	std::string			str;

	if (ft_error(&ifs, s1, s2))
		return (1);
	filename += ".replace";
	content << ifs.rdbuf();
	ifs.close();
	str = content.str();

	std::ofstream	ofs(filename.c_str());

	if (s1 != s2)
		str = ft_change(str, s1, s2);
	ofs << str;
	ofs.close();
	return (0);
}

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Error" << std::endl
			<< "usage: ./replace filename s1 s2" << std::endl;
		return (1);
	}
	return (ft_replace(av[1], av[2], av[3]));
}
