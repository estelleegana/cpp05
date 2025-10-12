#pragma once

#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &autre);
		~RobotomyRequestForm();

		void execute(Bureaucrat const &executor) const;

		std::string getTarget() const;
};


//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i);