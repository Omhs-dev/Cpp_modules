#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("Robotomy Request Form", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : AForm(copy), _target(copy._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    if (this != &copy)
    {
        AForm::operator=(copy);
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!getSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > gradeToExecute())
        throw AForm::GradeTooLowException();

    std::cout << "Drilling noises... ";
    if (std::rand() % 2)
    {
        std::cout << _target << " has been robotomized successfully." << std::endl;
    }
    else
    {
        std::cout << "Robotomy failed." << std::endl;
    }
}
