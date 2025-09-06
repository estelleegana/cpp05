#pragma once

#include <iostream>
#include <fstream>//std::ofstream

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		int	_gradeExec;
		int	_gradeSign;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
		AForm* clone() const;
};