#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _gradeExec(137), _gradeSign(145)
{
	std::string filename = target + "_shrubbery";
	std::ofstream fichier(filename);
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