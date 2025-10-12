#pragma once

#include <iostream>
#include <fstream>//std::ofstream

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &autre);
		~ShrubberyCreationForm();

		// AForm* clone() const;
		void execute(Bureaucrat const &executor) const;

		std::string getTarget() const;
};

//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i);