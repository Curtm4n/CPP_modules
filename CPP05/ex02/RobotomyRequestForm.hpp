/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdapurif <cdapurif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:57:26 by cdapurif          #+#    #+#             */
/*   Updated: 2022/01/28 15:13:18 by cdapurif         ###   ########.fr       */
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
	virtual void		execute(Bureaucrat const & executor) const;

private:

	std::string	_target;

};

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const & rhs);

#endif
