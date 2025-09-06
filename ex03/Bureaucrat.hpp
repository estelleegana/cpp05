#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

#include "AForm.hpp"

#define bRED "\033[1;31m"
#define bGREEN "\033[1;32m"
#define bBLUE "\033[1;34m"
#define bold "\033[1m"
#define RESET "\033[0m"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int _grade;

	public:
		//const & destr
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &copy);
		Bureaucrat &operator=(const Bureaucrat &autre);
		~Bureaucrat();

		//getter
		std::string getName() const;
		int getGrade() const;

		//fonctions membres
		void incrementGrade();
		void decrementGrade();
		void signForm(AForm &formulaire);
		void executeForm(AForm const &form) const;

		class GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw();
		};
};

//surcharge d'operateur global
std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif