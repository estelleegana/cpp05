#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : _gradeExec(45), _gradeSign(72)
{
	(void)_gradeExec;
	(void)_gradeSign;
	std::cout << "Brrrr... dzzzz... *drilling noises*" << std::endl;
	if (std::rand() % 2)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "The robotomy failed on " << target << "..." << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
	std::cout << bGREEN << "Constructor (copy) called - RobotomyRequestForm " << RESET << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &autre )
{
	_gradeExec = autre._gradeExec;
	_gradeSign = autre._gradeSign;
    std::cout << bBLUE << "Copy assignment operator called - RobotomyRequestForm" << RESET << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

AForm* RobotomyRequestForm::clone() const
{
	return new RobotomyRequestForm(*this);
}