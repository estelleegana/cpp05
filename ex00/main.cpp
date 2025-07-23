#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bo("bo", 146);
		bo.decrementGrade();
		std::cout << bo << std::endl;
		bo.decrementGrade();
		std::cout << bo << std::endl;
		bo.decrementGrade();
		std::cout << bo << std::endl;
		bo.decrementGrade();
		std::cout << bo << std::endl;
		bo.decrementGrade();
		std::cout << bo << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat bi("bi", 4);
		bi.incrementGrade();
		std::cout << bi << std::endl;
		bi.incrementGrade();
		std::cout << bi << std::endl;
		bi.incrementGrade();
		std::cout << bi << std::endl;
		bi.incrementGrade();
		std::cout << bi << std::endl;
		bi.incrementGrade();
		std::cout << bi << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}