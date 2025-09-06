#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _gradeExec(5), _gradeSign(25)
{
	(void)_gradeExec;
	(void)_gradeSign;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}
AForm* PresidentialPardonForm::clone() const
{
	return new PresidentialPardonForm(*this);
}