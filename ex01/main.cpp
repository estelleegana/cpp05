#include "Bureaucrat.hpp"
#include "Form.hpp"

void    sectionTitle(const std::string& title) {
    std::cout    << std::endl
                << "			** " << title << " ***"
                << std::endl;
}

void    printError(std::exception& e) {
    std::cout << "Error: " << e.what() << std::endl;
}

int    main()
{
    Bureaucrat    burro("burro", 42);
    std::cout << burro;
	
    // sectionTitle("constructor");
    // try {
    //     Form    Formaccio("Formaccio", 1000, 1);
    // }
    // catch (std::exception& e) {
    //     printError(e);
    // }
    // try {
    //     Form    Formaccio("Formaccio", 42, 0);
    // }
    // catch (std::exception& e) {
    //     printError(e);
    // }

    sectionTitle("sign");
    try {
        Form    Formino("Formino", 42, 42);
        Form    Formone("Formone", 1, 1);
        std::cout << Formino << Formone;

        burro.signForm(Formino);
        std::cout << Formino;
        burro.signForm(Formino);

        sectionTitle("grade too low");
        burro.signForm(Formone);
    }
    catch (std::exception& e) {
        printError(e);
    }

    sectionTitle("grade too high");
    try {
        Bureaucrat bob("Bob", -13);
    }
    catch (std::exception& e) {
        printError(e);
    }
}