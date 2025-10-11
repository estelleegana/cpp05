#include "Bureaucrat.hpp"

//constr & destr
Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade <= 150 && grade >= 1)
		_grade = grade;
	else if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << bGREEN << "Constructor called - Bureaucrat " << RESET << "(name : " << _name << ", grade : " << _grade << ")" << std::endl;
}

Bureaucrat::Bureaucrat ( const Bureaucrat &copy )
{
    *this = copy;
	std::cout << bGREEN << "Constructor (copy) called - Bureaucrat " << RESET << std::endl;
}

Bureaucrat &Bureaucrat::operator=( const Bureaucrat &autre )
{
	_grade = autre._grade;
    std::cout << bBLUE << "Copy assignment operator called - Bureaucrat" << RESET << std::endl;
    return (*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << bRED << "Destructor called - Bureaucrat " << RESET << std::endl;
}




//getter
std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}





//fonctions
void Bureaucrat::incrementGrade()
{
	if (_grade >= 2)
		_grade--;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	if (_grade <= 149)
		this->_grade++;
	else
		throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm &formulaire)
{
	try
	{
		formulaire.beSigned(*this);
		std::cout << this->getName() << " signed " << formulaire.getName() << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << formulaire.getName() << " because " << e.what() << "." << std::endl;	
	}
}

void Bureaucrat::executeForm(AForm const &form) const
{
	try
	{
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
	catch (std::exception &e)
	{
        std::cout << this->getName() << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
		






//exceptions
const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return (bold "GradeTooHighException"RESET);
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return (bold "GradeTooLowException"RESET);
}









//surcharge doperateur global
std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}