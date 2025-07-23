#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat bo("bo", 146);
		bo.decrementGrade();//147
		std::cout << bo << std::endl;
		bo.decrementGrade();//148
		std::cout << bo << std::endl;
		bo.decrementGrade();//149
		std::cout << bo << std::endl;
		bo.decrementGrade();//150
		std::cout << bo << std::endl;
		bo.decrementGrade();//151 impossible
		std::cout << bo << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}