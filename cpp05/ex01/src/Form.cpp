#include "../Includes/Form.hpp"

Form::Form(const std::string &name, int gradeSign, int gradeToExecute)
    : _name(name), _sign(false), _gradeSign(gradeSign), _gradeToExecute(gradeToExecute)
{
    if (gradeSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &copy)
    : _name(copy._name), _sign(copy._sign), _gradeSign(copy._gradeSign), _gradeToExecute(copy._gradeToExecute) {}

Form::~Form() {}

std::string Form::getName() const 
{
    return (_name);
}

bool Form::getSigned() const
{
    return (_sign);
}

int Form::gradeSign() const
{
    return (_gradeSign);
}

int Form::gradeToExecute() const
{
    return (_gradeToExecute);
}

void Form::beSigned(const Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeSign)
        throw Form::GradeTooLowException();
    _sign = true;
}

std::ostream &operator<<(std::ostream &o, const Form &copy)
{
    o << "Form name: " << copy.getName() << std::endl
        << "Signed: " << copy.gradeSign() << std::endl
        << "Executed: " << copy.gradeToExecute() << std::endl;
    return (o);
}