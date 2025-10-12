#pragma once

#include <iostream>
#define bRED "\033[1;31m"
#define bGREEN "\033[1;32m"
#define bBLUE "\033[1;34m"
#define bold "\033[1m"
#define RESET "\033[0m"

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

	public:
		//cnstr & destr
		AForm();
		AForm(const std::string name, const int gradeS, const int gradeE);
		AForm(const AForm &copy);
		AForm &operator=(const AForm &autre);
		virtual ~AForm();

		//getters
		std::string getName() const;
		bool getSigned() const;
		int getGradeS() const;
		int getGradeE() const;

		// //classe abstraite (virtual .. = 0)
		// virtual AForm *clone() const = 0;

		//fonctions membres
		void beSigned(Bureaucrat const &bubu);
		virtual void execute(Bureaucrat const & executor) const = 0;

		//exceptions
		class GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			virtual const char * what() const throw();
		};
};