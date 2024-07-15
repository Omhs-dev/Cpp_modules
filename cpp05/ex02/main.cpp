#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat john("John", 50);
        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("Bender");
        PresidentialPardonForm pardon("Marvin");

        john.signForm(shrubbery);
        john.executeForm(shrubbery);

        john.signForm(robotomy);
        john.executeForm(robotomy);

        john.signForm(pardon);
        john.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
