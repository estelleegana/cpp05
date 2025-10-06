#include "Form.hpp"
#include "Bureaucrat.hpp"

//constr & destr
Form::Form() : _name("default"), _signed(false), _gradeSign(0), _gradeExec(0)
{
	std::cout << "default no param" << std::endl;
}
Form::Form(const std::string name, const int gradeS, const int gradeE) : _name(name), _gradeSign(gradeS), _gradeExec(gradeE)
{
	if (_gradeSign < 1 || _gradeExec < 1)
		throw GradeTooHighException();
	else if (_gradeSign > 150 || _gradeExec > 150)
		throw GradeTooLowException();

	_signed = false;

	std::cout << bGREEN << "Constructor (default) called - Form " << RESET << std::endl;
}

Form::Form ( const Form &copy ) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
    *this = copy;
	std::cout << bGREEN << "Constructor (copy) called - Form " << RESET << std::endl;
}

Form &Form::operator=( const Form &autre )
{
	_signed = autre.getSigned();
    std::cout << bBLUE << "Copy assignment operator called - Form" << RESET << std::endl;
    return (*this);
}

Form::~Form()
{
    std::cout << bRED << "Destructor called - Form " << RESET << std::endl;
}




//getter
std::string Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}

int Form::getGradeS() const
{
	return (_gradeSign);
}

int Form::getGradeE() const
{
	return (_gradeExec);
}





void Form::beSigned(Bureaucrat &bubu)
{
	if (bubu.getGrade() <= _gradeSign)
		_signed = 1;
	else
		throw GradeTooLowException();
}





//exceptions
const char * Form::GradeTooHighException::what() const throw()
{
	return (bold "GradeTooHighException"RESET);
}

const char * Form::GradeTooLowException::what() const throw()
{
	return (bold "GradeTooLowException"RESET);
}






//surcharge doperateur global
std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << i.getName() << ", signed " << i.getSigned() << ", gradeS " << i.getGradeS() << ", gradeE " << i.getGradeE() << "." << std::endl;
	return o;
}