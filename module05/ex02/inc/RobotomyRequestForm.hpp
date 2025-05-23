/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:53:35 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/21 12:04:40 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

typedef std::string str;

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(Bureaucrat &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();

		RobotomyRequestForm &	operator=(RobotomyRequestForm const &rSym);

		void	beSigned(Bureaucrat & person);
		void	execute(Bureaucrat & executor) const;
	private:
		Bureaucrat &target;
};

std::ostream &	operator<<(std::ostream & o, RobotomyRequestForm const &rSym);

#endif
