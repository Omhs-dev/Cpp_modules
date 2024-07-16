#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("Shrubbery Creation Form", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
    : AForm(copy), _target(copy._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
        AForm::operator=(copy);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (!getSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > gradeToExecute())
        throw AForm::GradeTooLowException();

    std::ofstream ofs((_target + "_shrubbery").c_str());
    if (ofs.is_open())
    {
        ofs << "       _-_\n"
            << "    /~~   ~~\\\n"
            << " /~~         ~~\\\n"
            << "{               }\n"
            << " \\  _-     -_  /\n"
            << "   ~  \\\\ //  ~\n"
            << "_- -   | | _- _\n"
            << "  _ -  | |   -_\n"
            << "      // \\\\"
            << "\n";
        ofs.close();
    }
    else
        throw std::ofstream::failure("Error: Unable to open file.");
}
