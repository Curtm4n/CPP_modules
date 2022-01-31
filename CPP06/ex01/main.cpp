/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:25:18 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/31 13:55:02 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	struct Data	data;
	struct Data	*ret;
	uintptr_t	value;

	data.i = 42;
	data.c = 'c';
	data.s = "hello world!";
	value = serialize(&data);
	ret = deserialize(value);
	if (ret == &data)
		std::cout << Green << "SUCCESS" << Reset << std::endl;
	else
		std::cout << Red << "FAILURE" << Reset << std::endl;
	std::cout << "values are: " << std::endl << "int: " << ret->i << std::endl << "char: " << ret->c
		<< std::endl << "string: " << ret->s << std::endl;
	return (0);
}
