#pragma once

#include <iostream>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &autre);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;

		std::string getTarget() const;
};


//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i);