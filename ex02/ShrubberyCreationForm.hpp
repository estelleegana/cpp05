#pragma once

#include <iostream>
#include <fstream>// pour std::ofstream

class ShrubberyCreationForm
{
	private:
		int	_gradeExec;
		int	_gradeSign;
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();
};