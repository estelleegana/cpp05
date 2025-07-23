//#pragma once
#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

#define bRED "\033[1;31m"
#define bGREEN "\033[1;32m"
#define bBLUE "\033[1;34m"
#define bold "\033[1m"
#define RESET "\033[0m"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

	public:
		//const & destr
		Form();
		Form(const std::string name, const int gradeS, const int gradeE);
		Form(const Form &copy);
		Form &operator=(const Form &autre);
		~Form();

		//getters
		std::string getName() const;
		bool getSigned() const;
		int getGradeS() const;
		int getGradeE() const;

		//fonctions membres
		void beSigned(Bureaucrat &bubu);

		//exceptions
		class GradeTooHighException : public std::exception
		{
			virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char * what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Form const &i);
#endif