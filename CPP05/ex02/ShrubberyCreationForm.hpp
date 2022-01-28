/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:57:26 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 12:56:28 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

public:

	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual ~ShrubberyCreationForm(void);

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & rhs);

	std::string const &	getTarget(void) const;

private:

	std::string	_target;

/*public:

	class GradeTooHighException : public std::exception
	{

		public:

			virtual const char	*what(void) const throw();

	};
	class GradeTooLowException : public std::exception
	{

		public:

			virtual const char	*what(void) const throw();

	};*/

};

std::ostream &	operator<<(std::ostream & o, ShrubberyCreationForm const & rhs);

#endif
