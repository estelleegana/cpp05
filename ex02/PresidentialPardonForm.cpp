#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : _gradeExec(5), _gradeSign(25)
{
	(void)_gradeExec;
	(void)_gradeSign;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm ( const PresidentialPardonForm &copy )
{
    *this = copy;
	std::cout << bGREEN << "Constructor (copy) called - PresidentialPardonForm " << RESET << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=( const PresidentialPardonForm &autre )
{
	_gradeExec = autre._gradeExec;
	_gradeSign = autre._gradeSign;
    std::cout << bBLUE << "Copy assignment operator called - PresidentialPardonForm" << RESET << std::endl;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

AForm* PresidentialPardonForm::clone() const
{
	return new PresidentialPardonForm(*this);
}