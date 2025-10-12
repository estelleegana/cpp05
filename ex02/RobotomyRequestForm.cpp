#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy) {}

RobotomyRequestForm &RobotomyRequestForm::operator=( const RobotomyRequestForm &autre )
{
	(void)autre;
    std::cout << bBLUE << "RobotomyRequestForm - Copy assignment operator= " << RESET << std::endl;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{}






void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() == 0)
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeE())
		throw GradeTooLowException();

	std::cout << "Brrrr... dzzzz... *drilling noises*....... ";
	if (std::rand() % 2)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "The robotomy failed on " << _target << "..." << std::endl;
}










//getter
std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

//surcharge doperateur global
std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &i)
{
	o << "Robotomy: target " << i.getTarget() << ", name " << i.getName() << ", signed " << i.getSigned() << ", required grade to be executed: " << i.getGradeE() << ", required grade to be signed: " << i.getGradeS() << std::endl;
	return o;
}