#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm &copy ) : AForm(copy) {}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &autre )
{
	(void)autre;
    std::cout << bBLUE << "PresidentialPardonForm - Copy assignment operator called= " << RESET << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}





void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() == 0)
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeE())
		throw GradeTooLowException();
		
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}







std::string PresidentialPardonForm::getTarget() const
{
	return _target;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &i)
{
	o << "Robotomy: target " << i.getTarget() << ", name " << i.getName() << ", signed " << i.getSigned() << ", required grade to be executed: " << i.getGradeE() << ", required grade to be signed: " << i.getGradeS() << std::endl;
	return o;
}