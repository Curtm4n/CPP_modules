/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:57:26 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 09:59:06 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:

	Form(void);
	Form(std::string const & name, int toSign, int toExec);
	Form(Form const & src);
	virtual ~Form(void);

	Form &	operator=(Form const & rhs);

	std::string const &	getName(void) const;
	bool				getSigned(void) const;
	int const &			getGradeSigned(void) const;
	int const &			getGradeExec(void) const;

	void				beSigned(Bureaucrat const & b);

private:

	std::string const	_name;
	bool				_signed;
	int const			_gradeSign;
	int const			_gradeExec;

	void				checkGrades(void);

public:

	class GradeTooHighException : public std::exception
	{

		public:

			virtual const char	*what(void) const throw();

	};
	class GradeTooLowException : public std::exception
	{

		public:

			virtual const char	*what(void) const throw();

	};

};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
