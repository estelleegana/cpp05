#pragma once

#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		int	_gradeExec;
		int	_gradeSign;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

		AForm* clone() const;
};