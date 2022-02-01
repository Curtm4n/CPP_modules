/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:40:41 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/01 17:16:43 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include "Colors.hpp"

template<typename T>
class Array
{

public:

	Array(void);
	Array(unsigned int n);
	Array(Array const & src);
	virtual ~Array(void);

	Array &	operator=(Array const & rhs);

	T	getElem(unsigned int const & i);
	void	setElem(unsigned int const & i, T e);
	
	static bool	verbose;

private:

	unsigned int	_size;
	T		*_elem;

};

template<typename T>
Array<T>::Array(void) : _size(0)
{
	if (Array::verbose)
		std::cout << "Array default constructor called" << std::endl;
	_elem = new T[1];
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	if (Array::verbose)
		std::cout << "Array parameter constructor called" << std::endl;
	_elem = new T[n];
}

template<typename T>
Array<T>::Array(Array<T> const & src)
{
	if (Array::verbose)
		std::cout << "Array copy constructor called" << std::endl;
	_elem = NULL;
	*this = src;
}

template<typename T>
Array<T>::~Array(void)
{
	if (Array::verbose)
		std::cout << "Array destructor called" << std::endl;
	delete [] _elem;
}

template<typename T>
Array<T> &	Array<T>::operator=(Array<T> const & rhs)
{
	if (this == &rhs)
		return (*this);
	delete [] _elem;
	if (_size == 0)
		_elem = new T[1];
	else
	{
		_elem = new T[_size];
		for (int i = 0; i < _size; i++)
			_elem[i] = rhs.getElem(i);
	}
	return (*this);
}

template<typename T>
T	Array<T>::getElem(unsigned int const & i)
{
	if (i >= _size)
		return (0);
	return (*this->_elem[i]);
}

template<typename T>
void	Array<T>::setElem(unsigned int const & i, T e)
{
	if (i >= _size)
	{
		std::cout << Red << "Cannot place elem at this index" << Reset << std::endl;
		return ;
	}
	this->_elem[i] = e;
}

template<typename T>
bool	Array<T>::verbose = true;

#endif
