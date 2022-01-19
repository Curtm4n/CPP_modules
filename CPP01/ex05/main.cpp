/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:56:55 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/19 22:16:09 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	std::cout << std::endl
		<< "    [Karen seems to have a problem with her bacon]" << std::endl << std::endl;
	karen.complain("DEBUG");
	std::cout << std::endl
		<< "    [She wants more bacon in her burger for free]" << std::endl << std::endl;
	karen.complain("INFO");
	std::cout << std::endl
		<< "    [She seems to be the number one client here]" << std::endl << std::endl;
	karen.complain("WARNING");
	std::cout << std::endl
		<< "    [She pissed now...]" << std::endl << std::endl;
	karen.complain("ERROR");
	return (0);
}
