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

enum formtype
{
	TYPE_SHRUB,//0
	TYPE_ROBO,//1
	TYPE_PRESIDENT,//2
	TYPE_INVALID,//3
};

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
};