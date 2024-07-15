#include "includes/Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat("Bureaucrat", 1);
        
        std::cout << bureaucrat << std::endl;
        
        bureaucrat.incrementGrades();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }

    return (0);
}
