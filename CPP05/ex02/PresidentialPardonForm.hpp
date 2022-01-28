/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:57:26 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 12:53:24 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{

public:

	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(PresidentialPardonForm const & src);
	virtual ~PresidentialPardonForm(void);

	PresidentialPardonForm &	operator=(PresidentialPardonForm const & rhs);

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

std::ostream &	operator<<(std::ostream & o, PresidentialPardonForm const & rhs);

#endif
