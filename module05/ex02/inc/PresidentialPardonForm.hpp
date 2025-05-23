/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adapassa <adapassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:52:53 by adapassa          #+#    #+#             */
/*   Updated: 2025/05/21 12:03:08 by adapassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(Bureaucrat & target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm();

		PresidentialPardonForm &operator=(PresidentialPardonForm const &rSym);

		void	beSigned(Bureaucrat &person);
		// redefined execute method for concrete class
		void	execute(Bureaucrat &executor) const;
	private:
		Bureaucrat &target;
};

std::ostream &operator<<(std::ostream & o, PresidentialPardonForm const &rSym);

#endif
