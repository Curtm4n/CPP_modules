/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:56:55 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/19 22:37:16 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen		karen;
	std::string	str;

	if (ac == 1)
		std::cout << "[ Karen seems speechless ]" << std::endl;
	else if (ac == 2)
		karen.complain(av[1]);
	else
		std::cout << "[ Karen complain to much today ]" << std::endl;
	return (0);
}
