/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:31:41 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/21 09:53:00 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strptr = &str;
	std::string	&strref = str;

	std::cout << &str << " is the adress of str" << std::endl;
	std::cout << strptr << " is the adress of str using strptr" << std::endl;
	std::cout << &strref << " is the adress of str using strref" << std::endl;
	std::cout << str << " <-- the content of str" << std::endl;
	std::cout << *strptr << " <-- the content of str using ptr" << std::endl;
	std::cout << strref << " <-- is the content of str using ref" << std::endl;
	return (0);
}
