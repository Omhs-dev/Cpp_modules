#include "../includes/AForm.hpp"

AForm::AForm(const std::string &name, int gradeSign, int gradeToExecute)
    : _name(name), _sign(false), _gradeSign(gradeSign), _gradeToExecute(gradeToExecute)
{
    if (gradeSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &copy)
    : _name(copy._name), _sign(copy._sign), _gradeSign(copy._gradeSign), _gradeToExecute(copy._gradeToExecute) {}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &copy)
{
    if (this != &copy)
        this->_sign = copy._sign;
    return *this;
}

std::string AForm::getName() const 
{
    return (_name);
}

bool AForm::getSigned() const
{
    return (_sign);
}

int AForm::gradeSign() const
{
    return (_gradeSign);
}

int AForm::gradeToExecute() const
{
    return (_gradeToExecute);
}

void AForm::beSigned(const Bureaucrat bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeSign)
        throw AForm::GradeTooLowException();
    _sign = true;
}

std::ostream &operator<<(std::ostream &o, const AForm &copy)
{
    o << "AForm name: " << copy.getName() << std::endl
        << "Signed: " << copy.gradeSign() << std::endl
        << "Executed: " << copy.gradeToExecute() << std::endl;
    return (o);
}