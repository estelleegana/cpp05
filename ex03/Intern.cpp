#include "Intern.hpp"

Intern::Intern()
{
	std::cout << bGREEN << "Intern - Constructor (default) " << RESET << std::endl;
}

Intern::Intern ( const Intern &copy )
{
    *this = copy;
	std::cout << bGREEN << "Intern - Constructor (copy) " << RESET << std::endl;
}

Intern &Intern::operator=( const Intern &autre )
{
	(void)autre;
    std::cout << bBLUE << "Intern - Copy assignment operator=" << RESET << std::endl;
    return (*this);
}

Intern::~Intern()
{
    std::cout << bRED << "Intern - Destructor " << RESET << std::endl;
}

AForm* Intern::makeForm(std::string formname, std::string target)
{
	formtype form;

	if (formname == "ShrubberyCreationForm")
		form = TYPE_SHRUB;
	else if (formname == "RobotomyRequestForm")
		form = TYPE_ROBO;
	else if (formname == "PresidentialPardonForm")
		form = TYPE_PRESIDENT;
	else
		form = TYPE_INVALID;

	switch (form)
	{
		case TYPE_SHRUB:
			std::cout << "Intern creates " << formname << std::endl;
			return new ShrubberyCreationForm(target);
		case TYPE_ROBO:
			std::cout << "Intern creates " << formname << std::endl;
			return new RobotomyRequestForm(target);
		case TYPE_PRESIDENT:
			std::cout << "Intern creates " << formname << std::endl;
			return new PresidentialPardonForm(target);
		case TYPE_INVALID:
			std::cout << formname << " does not exist" << std::endl;
			return NULL;
		default:
			break;
	}
}