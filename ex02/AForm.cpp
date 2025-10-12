#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeSign(0), _gradeExec(0)
{
	std::cout << bGREEN << "AForm - Constructor (default) " << RESET << "(name: " << _name << ", gradeSign: " << _gradeSign << ", gradeExec: " << _gradeExec << ")" << std::endl;
}

AForm::AForm(const std::string name, const int gradeS, const int gradeE) : _name(name), _gradeSign(gradeS), _gradeExec(gradeE)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();

	_signed = false;

	std::cout << bGREEN << "AForm - Constructor " << RESET << "(name: " << _name << ", gradeSign: " << _gradeSign << ", gradeExec: " << _gradeExec << ")" << std::endl;
}

AForm::AForm ( const AForm &copy ) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
    *this = copy;
	std::cout << bGREEN << "AForm - Constructor (copy) " << RESET << "(name: " << _name << ", gradeSign: " << _gradeSign << ", gradeExec: " << _gradeExec << ")" << std::endl;
}

AForm &AForm::operator=( const AForm &autre )
{
	_signed = autre.getSigned();
    std::cout << bBLUE << "Copy assignment operator=" << RESET << std::endl;
    return (*this);
}

AForm::~AForm()
{
    std::cout << bRED << "AForm - Destructor " << RESET << "(name: " << _name << ", gradeSign: " << _gradeSign << ", gradeExec: " << _gradeExec << ")" << std::endl;
}







//getter
std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}

int AForm::getGradeS() const
{
	return (_gradeSign);
}

int AForm::getGradeE() const
{
	return (_gradeExec);
}












//fonctions membres
void AForm::beSigned(Bureaucrat const &bubu)
{
	if (bubu.getGrade() <= _gradeSign)
		_signed = 1;
	else
		throw GradeTooLowException();
}








//exceptions
const char * AForm::GradeTooHighException::what() const throw()
{
	return (bold "GradeTooHighException"RESET);
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return (bold "GradeTooLowException"RESET);
}
const char * AForm::FormNotSignedException::what() const throw()
{
	return (bold "FormNotSignedException"RESET);
}








//surcharge doperateur global
std::ostream &operator<<(std::ostream &o, AForm const &i)
{
	o << i.getName() << ", signed " << i.getSigned() << ", gradeS " << i.getGradeS() << ", gradeE " << i.getGradeE() << "." << std::endl;
	return o;
}