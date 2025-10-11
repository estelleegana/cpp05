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
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &autre);
		~RobotomyRequestForm();

		AForm* clone() const;
};