/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 13:59:43 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/30 16:23:43 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1 || ac > 2)
	{
		std::cout << Red << "You must give one argument to the program"
			<< Reset << std::endl;
		return (1);
	}

	Convert c(av[1]);

	c.toChar();
	c.toInt();
	c.toFloat();
	c.toDouble();

	return (0);
}
