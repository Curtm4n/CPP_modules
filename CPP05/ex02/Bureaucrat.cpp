/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:11:02 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/31 13:06:54 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	checkGrade();
	std::cout << "Bureaucrat parameter constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src.getName()), _grade(src.getGrade())
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this == &rhs)
		return (*this);
	std::cout << "name cannot be changed after initialization" << std::endl;
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string const &	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int const &	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::upgrade(void)
{
	this->_grade--;
	checkGrade();
}

void	Bureaucrat::downgrade(void)
{
	this->_grade++;
	checkGrade();
}

void	Bureaucrat::signForm(Form & form) const
{
	if (this->_grade <= form.getGradeSigned())
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	else
		std::cout << this->_name << " couldn't sign " << form.getName()
			<< " because grade is too low" << std::endl;
}

void	Bureaucrat::executeForm(Form const & form)
{
	form.execute(*this);
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}

void	Bureaucrat::checkGrade(void)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}

const char	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high");
}

const char	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low");
}
