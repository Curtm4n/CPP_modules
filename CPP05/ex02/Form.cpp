/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:02:29 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 12:41:57 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _gradeSign(150), _gradeExec(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const & name, int toSign, int toExec) : _name(name),
	_signed(false), _gradeSign(toSign), _gradeExec(toExec)
{
	checkGrades();
	std::cout << "Form parameter constructor called" << std::endl;
}

Form::Form(Form const & src) : _name(src.getName()), _signed(src.getSigned()),
	_gradeSign(src.getGradeSigned()), _gradeExec(src.getGradeExec())
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

Form &	Form::operator=(Form const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "Cannot copy name, and the grade for sign and exec" << std::endl;
	_signed = rhs.getSigned();
	return (*this);
}

void	Form::checkGrades(void)
{
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw Form::GradeTooHighException();
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw Form::GradeTooLowException();
}

void	Form::beSigned(Bureaucrat const & b)
{
	if (this->_gradeSign < b.getGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::string const &	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int const &	Form::getGradeSigned(void) const
{
	return (this->_gradeSign);
}

int const &	Form::getGradeExec(void) const
{
	return (this->_gradeExec);
}

void	Form::setSigned(bool sign)
{
	_signed = sign;
}

const char	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

const char	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

std::ostream &	operator<<(std::ostream & o, Form const & rhs)
{
	std::string	sign;

	if (rhs.getSigned())
		sign = " signed";
	else
		sign = " not signed";
	o << "Form " << rhs.getName() << sign << ", grade to sign: "
		<< rhs.getGradeSigned() << ", grade to execute: " << rhs.getGradeExec();
	return (o);
}
