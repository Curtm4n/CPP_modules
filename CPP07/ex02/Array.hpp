/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:40:41 by cdapurif          #+#    #+#             */
/*   Updated: 2022/02/03 18:30:30 by cdapurif         ###   ########.fr       */
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
	T &		operator[](unsigned int const & index);

	T &						getElem(unsigned int const & i) const;
	void					setElem(T e);
	unsigned int const &	getSize(void) const;
	unsigned int const &	size(void) const;

	static bool	verbose;

private:

	unsigned int	_size;
	unsigned int	_counter;
	T				*_elem;

};

template<typename T>
Array<T>::Array(void) : _size(0), _counter(0)
{
	if (Array::verbose)
		std::cout << "Array default constructor called" << std::endl;
	_elem = new T[1];
}

template<typename T>
Array<T>::Array(unsigned int n) : _size(n), _counter(0)
{
	if (Array::verbose)
		std::cout << "Array parameter constructor called" << std::endl;
	if (n == 0)
		_elem = new T[1];
	else
		_elem = new T[n];
}

template<typename T>
Array<T>::Array(Array<T> const & src) : _elem(NULL)
{
	if (Array::verbose)
		std::cout << "Array copy constructor called" << std::endl;
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
	_size = rhs.getSize();
	_counter = rhs.size();
	if (_size == 0)
		_elem = new T[1];
	else
	{
		_elem = new T[_size];
		for (unsigned int i = 0; i < _counter; i++)
			_elem[i] = rhs.getElem(i);
	}
	return (*this);
}

template<typename T>
T &	Array<T>::operator[](unsigned int const & index)
{
	return (this->getElem(index));
}

template<typename T>
T &	Array<T>::getElem(unsigned int const & i) const
{
	if (i >= _size || _size == 0)
		throw std::exception();
	return (this->_elem[i]);
}

template<typename T>
void	Array<T>::setElem(T e)
{
	unsigned int i = 0;

	if (_size == 0)
	{
		std::cout << Red << "There's no place in this array" << Reset << std::endl;
		return ;
	}
	while (i < _counter)
		i++;
	if (i >= _size)
	{
		std::cout << Red << "Array full" << Reset << std::endl;
		return ;
	}
	_counter++;
	this->_elem[i] = e;
}

template<typename T>
unsigned int const &	Array<T>::getSize(void) const
{
	return (this->_size);
}

template<typename T>
unsigned int const &	Array<T>::size(void) const
{
	return (this->_counter);
}

template<typename T>
bool	Array<T>::verbose = false;

#endif
