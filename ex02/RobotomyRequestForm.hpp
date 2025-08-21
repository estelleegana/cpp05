#pragma once

#include <iostream>

class RobotomyRequestForm
{
	private:
		int	_gradeExec;
		int	_gradeSign;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
};