/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:57:26 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 12:54:24 by cdapurif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{

public:

	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(RobotomyRequestForm const & src);
	virtual ~RobotomyRequestForm(void);

	RobotomyRequestForm &	operator=(RobotomyRequestForm const & rhs);

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

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & rhs);

#endif
