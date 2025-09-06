#pragma once

#include <iostream>
#define bRED "\033[1;31m"
#define bGREEN "\033[1;32m"
#define bBLUE "\033[1;34m"
#define bold "\033[1m"
#define RESET "\033[0m"

// #include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class AForm;

class Intern
{
	public:
		//cnstr & destr
		Intern();
		Intern(const Intern &copy);
		Intern &operator=(const Intern &autre);
		~Intern();

		//fonction membre
		AForm *makeForm(std::string formname, std::string target);

		//exceptions
		class FormDoesntExist : public std::exception
		{
			virtual const char * what() const throw();
		};
};