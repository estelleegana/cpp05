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
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &autre);
		~ShrubberyCreationForm();
		AForm* clone() const;
};