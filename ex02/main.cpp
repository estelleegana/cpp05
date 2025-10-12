#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void)
{
	srand(time(NULL));
	
	std::cout << "\033[33m" << std::endl << "Test ex02" << "\033[0m" << std::endl;

	// std::cout << "\033[33m" << std::endl << "Test ex02 AForm abstract : non instanciable" << "\033[0m" << std::endl;
	// // AForm impossibleee;
	
	// std::cout << "\033[33m" << std::endl << "Test ex02 ShrubberyCreationForm" << "\033[0m" << std::endl;
	// Bureaucrat Mr_Shrubby("Mr_Shrubby", 137);
	// ShrubberyCreationForm Shrubby_form("Hello");
	// std::cout << Shrubby_form;
	// Mr_Shrubby.executeForm(Shrubby_form);
	// Mr_Shrubby.signForm(Shrubby_form);
	// std::cout << Shrubby_form;
	// Mr_Shrubby.executeForm(Shrubby_form);

	// std::cout << "\033[33m" << std::endl << "Test ex02 RobotomyRequestForm" << "\033[0m" << std::endl;
	// RobotomyRequestForm Robo_form("I am a robo form");
	// Bureaucrat Mr_Robo("Mr_Robo", 44);

	// Mr_Robo.executeForm(Robo_form);
	// Mr_Robo.signForm(Robo_form);
	// Mr_Robo.executeForm(Robo_form);
	// Mr_Robo.executeForm(Robo_form);
	// Mr_Robo.executeForm(Robo_form);

	std::cout << "\033[33m" << std::endl << "Test ex02 PresidentialPardonForm" << "\033[0m" << std::endl;
	PresidentialPardonForm President_form("I am a robo form");
	Bureaucrat Mr_President("Mr_President", 5);
	Bureaucrat Mr_peutpas("mr_peutpas", 26);
	std::cout << President_form;
	Mr_peutpas.executeForm(President_form);
	Mr_peutpas.signForm(President_form);

	Mr_President.executeForm(President_form);
	Mr_President.signForm(President_form);
	Mr_President.executeForm(President_form);
	
	return (0);
}