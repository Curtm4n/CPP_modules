/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:11:09 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 21:19:53 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{

public:

	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & src);
	virtual ~Bureaucrat(void);

	Bureaucrat &	operator=(Bureaucrat const & rhs);

	std::string const &	getName(void) const;
	int const &			getGrade(void) const;
	void				upgrade(void);
	void				downgrade(void);
	void				signForm(Form & form) const;
	void				executeForm(Form const & form);

private:

	std::string const	_name;
	int					_grade;

	void				checkGrade(void);

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

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
