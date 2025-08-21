#pragma once

#include <iostream>

class PresidentialPardonForm
{
	private:
		int	_gradeExec;
		int	_gradeSign;
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
};