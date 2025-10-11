#pragma once

#include <iostream>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		int	_gradeExec;
		int	_gradeSign;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &autre);
		~PresidentialPardonForm();

		AForm* clone() const;
};