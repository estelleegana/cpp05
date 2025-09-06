#include "Intern.hpp"

Intern::Intern()
{
	std::cout << bGREEN << "Constructor (default no param) called - Intern " << RESET << std::endl;
}

Intern::Intern ( const Intern &copy )
{
    *this = copy;
	std::cout << bGREEN << "Constructor (copy) called - Intern " << RESET << std::endl;
}

Intern &Intern::operator=( const Intern &autre )
{
	(void)autre;
    std::cout << bBLUE << "Copy assignment operator called - Intern" << RESET << std::endl;
    return (*this);
}

Intern::~Intern()
{
    std::cout << bRED << "Destructor called - Intern " << RESET << std::endl;
}

AForm* Intern::makeForm(std::string formname, std::string target)
{
	if (formname == "ShrubberyCreationForm")
	{
		std::cout << "Intern creates " << formname << std::endl;
		return new ShrubberyCreationForm(target);
	}
	else if (formname == "RobotomyRequestForm")
	{
		std::cout << "Intern creates " << formname << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (formname == "PresidentialPardonForm")
	{
		std::cout << "Intern creates " << formname << std::endl;
		return new PresidentialPardonForm(target);
	}
	else
	{
		std::cout << "Form name does not correspond to any existing form." << std::endl;
		// throw FormDoesntExist();
		return 0;
	}
}

//exceptions
const char * Intern::FormDoesntExist::what() const throw()
{
	return (bold "FormDoesntExist"RESET);
}