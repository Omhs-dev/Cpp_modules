#include "../Includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
{
    this->_name = name;
    this->_grade = grade;
    
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
};

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    this->_name = copy._name;
    this->_grade = copy._grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    if (this != &copy)
        this->_grade = copy.getGrade();
    
    return *this;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrades()
{
    if (this->_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

void Bureaucrat::decrementGrades()
{
    if (this->_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << *this << " signed " << form.getName() << std::endl;
    }
    catch(AForm::GradeTooLowException &e)
    {
        std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(AForm const &form)
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << _name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
    
}

std::ostream& operator<<(std::ostream &o, const Bureaucrat &copy)
{
    o << copy.getName() << ", bureaucrat grade " << copy.getGrade() << std::endl;
    return o;
}
