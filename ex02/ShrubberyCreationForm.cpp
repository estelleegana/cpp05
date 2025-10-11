#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : _gradeExec(137), _gradeSign(145)
{
	(void)_gradeExec;
	(void)_gradeSign;

	std::string filename = target + "_shrubbery";
	std::ofstream fichier(filename.c_str());
	for (int i = 0; i < 2; i++)
	{
		fichier << "        *" << std::endl;
		fichier << "       ***" << std::endl;
		fichier << "      *****" << std::endl;
		fichier << "     *******" << std::endl;
		fichier << "    *********" << std::endl;
		fichier << "       |||" << std::endl;
		fichier << "       |||" << std::endl;
	}
	fichier.close();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
	std::cout << bGREEN << "Constructor (copy) called - ShrubberyCreationForm " << RESET << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &autre )
{
	_gradeExec = autre._gradeExec;
	_gradeSign = autre._gradeSign;
    std::cout << bBLUE << "Copy assignment operator called - ShrubberyCreationForm" << RESET << std::endl;
    return (*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{}

AForm* ShrubberyCreationForm::clone() const
{
	return new ShrubberyCreationForm(*this);
}