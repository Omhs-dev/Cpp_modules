#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        // Bureaucrat john("John", 50);
        Bureaucrat john("John", 2);
        ShrubberyCreationForm shrubbery("home");
        RobotomyRequestForm robotomy("Bender");
        PresidentialPardonForm pardon("Marvin");

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------\n";
        john.signForm(shrubbery);
        john.executeForm(shrubbery);

        std::cout << "\n--------------- Form 2 ( robotomy ) ---------------\n";
        john.signForm(robotomy);
        john.executeForm(robotomy);

        std::cout << "\n--------------- Form 3 ( President ) ---------------\n";
        john.signForm(pardon);
        john.executeForm(pardon);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}

// int main(void)
// {

//     try {
//         Bureaucrat bureaucrat("John", 2); // error with 200
//         ShrubberyCreationForm form1("Shrubbery");
//         RobotomyRequestForm form2("Robotomy");
//         PresidentialPardonForm form3("President");

//         std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------\n";
//         bureaucrat.signForm(form1);
//         bureaucrat.executeForm(form1);
//         std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------\n";
//         bureaucrat.signForm(form2);
//         bureaucrat.executeForm(form2);
//         bureaucrat.executeForm(form2);
//         bureaucrat.executeForm(form2);
//         bureaucrat.executeForm(form2);
//         std::cout << "\n--------------- Form 3 ( President ) ---------------\n";
//         bureaucrat.signForm(form3);
//         bureaucrat.executeForm(form3);
//     } catch (std::exception &e) {
//         std::cout << e.what() << std::endl;
//     }
//     return 0;
// }
