#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _gradeExec(45), _gradeSign(72)
{
	std::cout << "Brrrr... dzzzz... *drilling noises*" << std::endl;
	if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "The robotomy failed on " << target << "..." << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm()
{}