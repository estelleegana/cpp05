#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("none") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=( const ShrubberyCreationForm &autre )
{
	(void)autre;
    std::cout << bBLUE << "ShrubberyCreationForm - Copy assignment operator= " << RESET << std::endl;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}






void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getSigned() == 0)
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeE())
		throw GradeTooLowException();

	std::string filename = _target + "_shrubbery";
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








//getter
std::string ShrubberyCreationForm::getTarget() const
{
	return _target;
}

//surcharge doperateur global
std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &i)
{
	o << "Shrubbery: target " << i.getTarget() << ", name " << i.getName() << ", signed " << i.getSigned() << ", required grade to be executed: " << i.getGradeE() << ", required grade to be signed: " << i.getGradeS() << std::endl;
	return o;
}