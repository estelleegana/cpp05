#pragma once

#include <iostream>

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
		int	_gradeExec;
		int	_gradeSign;
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

		AForm* clone() const;
};