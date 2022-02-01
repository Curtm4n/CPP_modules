/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:40:02 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/01 17:13:00 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	a(3);
	
	a.setElem(0, 42);
	std::cout << a.getElem(0) << std::endl;
	return (0);
}