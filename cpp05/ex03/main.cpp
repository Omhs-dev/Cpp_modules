#include "includes/Bureaucrat.hpp"
#include "includes/Intern.hpp"
#include <iostream>

int main(void)
{
    Intern someRandomIntern;
    AForm* rrf;
    
    std::cout << "\n---------------- Intern ----------------" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf)
    {
        Bureaucrat john("John", 1);
        // john.signForm(*rrf);
        // john.executeForm(*rrf);
        delete rrf;
    }
    
    std::cout << "\n---------------- President ----------------" << std::endl;
    rrf = someRandomIntern.makeForm("presidential pardon", "Alice");
    if (rrf)
    {
        Bureaucrat jane("Jane", 1);
        // jane.signForm(*rrf);
        // jane.executeForm(*rrf);
        delete rrf;
    }
    
    std::cout << "\n---------------- shrubbery ----------------" << std::endl;
    rrf = someRandomIntern.makeForm("shrubbery creation", "Home");
    if (rrf)
    {
        Bureaucrat mark("Mark", 1);
        // mark.signForm(*rrf);
        // mark.executeForm(*rrf);
        delete rrf;
    }
    
    std::cout << "\n---------------- invalid ----------------" << std::endl;
    rrf = someRandomIntern.makeForm("nonexistent form", "Nowhere");
    if (rrf)
        delete rrf;

    return 0;
}
