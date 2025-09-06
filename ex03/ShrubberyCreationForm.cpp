#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _gradeExec(137), _gradeSign(145)
{
	(void)_gradeExec;
	(void)_gradeSign;

	std::string filename = target + "_shrubbery";
	std::ofstream fichier(filename.c_str());
	fichier << "        *" << std::endl;
	fichier << "       ***" << std::endl;
	fichier << "      *****" << std::endl;
	fichier << "     *******" << std::endl;
	fichier << "    *********" << std::endl;
	fichier << "       |||" << std::endl;
	fichier << "       |||" << std::endl;
	fichier.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

AForm* ShrubberyCreationForm::clone() const
{
	return new ShrubberyCreationForm(*this);
}