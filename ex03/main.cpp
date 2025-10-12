#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	std::cout << "\033[33m" << std::endl << "Test ex03" << "\033[0m" << std::endl;

	std::cout << "\033[33m" << std::endl << "Test ex03 Intern" << "\033[0m" << std::endl;

	Intern Jr_Intern;
	AForm *robo_intern;

	robo_intern = Jr_Intern.makeForm("DoYouKnowMe", "Hmmmm");
	robo_intern = Jr_Intern.makeForm("PresidentialPardonForm", "World");

	std::cout << robo_intern->getName() << std::endl;
	delete robo_intern;
	return (0);
}